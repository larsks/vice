/*
 * mon_registerz80.c - The VICE built-in monitor Z80 register functions.
 *
 * Written by
 *  Andreas Boose <viceteam@t-online.de>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

/* #define DEBUG_MON_REGS */

#include "vice.h"

#include <stdio.h>
#include <string.h>

#include "lib.h"
#include "log.h"
#include "mon_register.h"
#include "mon_util.h"
#include "montypes.h"
#include "uimon.h"
#include "z80regs.h"

#ifdef DEBUG_MON_REGS
#define DBG(_x_) printf _x_
#else
#define DBG(_x_)
#endif

/* TODO: make the other functions here use this table. when done also do the
 *       same with the other CPUs and finally move common code to mon_register.c
 */

static mon_reg_list_t mon_reg_list_z80[14 + 1] = {
    {  "PC",  e_PC, 16, 0, 0, 0 },
    {  "AF",  e_AF, 16, 0, 0, 0 },
    {  "BC",  e_BC, 16, 0, 0, 0 },
    {  "DE",  e_DE, 16, 0, 0, 0 },
    {  "HL",  e_HL, 16, 0, 0, 0 },
    {  "IX",  e_IX, 16, 0, 0, 0 },
    {  "IY",  e_IY, 16, 0, 0, 0 },
    {  "SP",  e_SP, 16, 0, 0, 0 },
    {   "I",   e_I,  8, 0, 0, 0 },
    {   "R",   e_R,  8, 0, 0, 0 },
    { "AF'", e_AF2, 16, 0, 0, 0 },
    { "BC'", e_BC2, 16, 0, 0, 0 },
    { "DE'", e_DE2, 16, 0, 0, 0 },
    { "HL'", e_HL2, 16, 0, 0, 0 },
    { NULL, -1,  0,  0, 0, 0 }
};

/* TODO: this function is generic, move it into mon_register.c and remove
         mon_register_valid from the monitor_cpu_type_t struct
*/
/* check if register id is valid, returns 1 on valid, 0 on invalid */
static int mon_register_valid(int mem, int reg_id)
{
    mon_reg_list_t *mon_reg_list, *regs;
    int ret = 0;

    DBG(("mon_register_valid mem: %d id: %d\n", mem, reg_id));

    if (monitor_diskspace_dnr(mem) >= 0) {
        if (!check_drive_emu_level_ok(monitor_diskspace_dnr(mem) + 8)) {
            return 0;
        }
    }

    mon_reg_list = regs = mon_register_list_get(mem);

    do {
        if ((!(regs->flags & MON_REGISTER_IS_MEMORY)) && (regs->id == reg_id)) {
            ret = 1;
            break;
        }
        ++regs;
    } while (regs->name != NULL);

    lib_free(mon_reg_list);

    return ret;
}

static unsigned int mon_register_get_val(int mem, int reg_id)
{
    z80_regs_t *reg_ptr;

    if (monitor_diskspace_dnr(mem) >= 0) {
        if (!check_drive_emu_level_ok(monitor_diskspace_dnr(mem) + 8)) {
            return 0;
        }
    }

    reg_ptr = mon_interfaces[mem]->z80_cpu_regs;

    switch (reg_id) {
        case e_AF:
            return Z80_REGS_GET_AF(reg_ptr);
        case e_BC:
            return Z80_REGS_GET_BC(reg_ptr);
        case e_DE:
            return Z80_REGS_GET_DE(reg_ptr);
        case e_HL:
            return Z80_REGS_GET_HL(reg_ptr);
        case e_IX:
            return Z80_REGS_GET_IX(reg_ptr);
        case e_IY:
            return Z80_REGS_GET_IY(reg_ptr);
        case e_SP:
            return Z80_REGS_GET_SP(reg_ptr);
        case e_PC:
            return Z80_REGS_GET_PC(reg_ptr);
        case e_I:
            return Z80_REGS_GET_I(reg_ptr);
        case e_R:
            return Z80_REGS_GET_R(reg_ptr);
        case e_AF2:
            return Z80_REGS_GET_AF2(reg_ptr);
        case e_BC2:
            return Z80_REGS_GET_BC2(reg_ptr);
        case e_DE2:
            return Z80_REGS_GET_DE2(reg_ptr);
        case e_HL2:
            return Z80_REGS_GET_HL2(reg_ptr);
        default:
            log_error(LOG_ERR, "Unknown register!");
    }
    return 0;
}

static void mon_register_set_val(int mem, int reg_id, WORD val)
{
    z80_regs_t *reg_ptr;

    if (monitor_diskspace_dnr(mem) >= 0) {
        if (!check_drive_emu_level_ok(monitor_diskspace_dnr(mem) + 8)) {
            return;
        }
    }

    reg_ptr = mon_interfaces[mem]->z80_cpu_regs;

    switch (reg_id) {
        case e_AF:
            Z80_REGS_SET_AF(reg_ptr, val);
            break;
        case e_BC:
            Z80_REGS_SET_BC(reg_ptr, val);
            break;
        case e_DE:
            Z80_REGS_SET_DE(reg_ptr, val);
            break;
        case e_HL:
            Z80_REGS_SET_HL(reg_ptr, val);
            break;
        case e_IX:
            Z80_REGS_SET_IX(reg_ptr, val);
            break;
        case e_IY:
            Z80_REGS_SET_IY(reg_ptr, val);
            break;
        case e_SP:
            Z80_REGS_SET_SP(reg_ptr, val);
            break;
        case e_PC:
            Z80_REGS_SET_PC(reg_ptr, val);
            break;
        case e_I:
            Z80_REGS_SET_I(reg_ptr, (BYTE)val);
            break;
        case e_R:
            Z80_REGS_SET_R(reg_ptr, (BYTE)val);
            break;
        case e_AF2:
            Z80_REGS_SET_AF2(reg_ptr, val);
            break;
        case e_BC2:
            Z80_REGS_SET_BC2(reg_ptr, val);
            break;
        case e_DE2:
            Z80_REGS_SET_DE2(reg_ptr, val);
            break;
        case e_HL2:
            Z80_REGS_SET_HL2(reg_ptr, val);
            break;
        default:
            log_error(LOG_ERR, "Unknown register!");
            return;
    }
    force_array[mem] = 1;
}

static void mon_register_print(int mem)
{
    if (monitor_diskspace_dnr(mem) >= 0) {
        if (!check_drive_emu_level_ok(monitor_diskspace_dnr(mem) + 8)) {
            return;
        }
    } else if (mem != e_comp_space) {
        log_error(LOG_ERR, "Unknown memory space!");
        return;
    }
    mon_out("  ADDR AF   BC   DE   HL   IX   IY   SP   I  R  AF'  BC'  DE'  HL'\n");
    mon_out(".;%04x %04x %04x %04x %04x %04x %04x %04x %02x %02x %04x %04x %04x %04x\n",
            addr_location(mon_register_get_val(mem, e_PC)),
            mon_register_get_val(mem, e_AF),
            mon_register_get_val(mem, e_BC),
            mon_register_get_val(mem, e_DE),
            mon_register_get_val(mem, e_HL),
            mon_register_get_val(mem, e_IX),
            mon_register_get_val(mem, e_IY),
            mon_register_get_val(mem, e_SP),
            mon_register_get_val(mem, e_I),
            mon_register_get_val(mem, e_R),
            mon_register_get_val(mem, e_AF2),
            mon_register_get_val(mem, e_BC2),
            mon_register_get_val(mem, e_DE2),
            mon_register_get_val(mem, e_HL2));
}

/* TODO: try to make this a generic function, move it into mon_register.c and
         remove mon_register_list_get from the monitor_cpu_type_t struct */
static mon_reg_list_t *mon_register_list_getz80(int mem)
{
    mon_reg_list_t *mon_reg_list, *regs;

    mon_reg_list = regs = lib_malloc(sizeof(mon_reg_list_t) * 14);
    memcpy(mon_reg_list, mon_reg_list_z80, sizeof(mon_reg_list_t) * 14);

    do {
        regs->val = (unsigned int)mon_register_get_val(mem, regs->id);
        ++regs;
    } while (regs->name != NULL);

    return mon_reg_list;
}

void mon_registerz80_init(monitor_cpu_type_t *monitor_cpu_type)
{
    monitor_cpu_type->mon_register_get_val = mon_register_get_val;
    monitor_cpu_type->mon_register_set_val = mon_register_set_val;
    monitor_cpu_type->mon_register_print = mon_register_print;
    monitor_cpu_type->mon_register_print_ex = NULL;
    monitor_cpu_type->mon_register_list_get = mon_register_list_getz80;
    monitor_cpu_type->mon_register_valid = mon_register_valid;
}
