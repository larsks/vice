/*
 * vic20via2.c - VIA2 emulation in the VIC20.
 *
 * Written by
 *  Andr� Fachat <fachat@physik.tu-chemnitz.de>
 *  Ettore Perazzoli <ettore@comm2000.it>
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

#include "vice.h"

#include <stdio.h>

#include "alarm.h"
#include "clkguard.h"
#include "datasette.h"
#include "drive.h"
#include "interrupt.h"
#include "keyboard.h"
#include "log.h"
#include "maincpu.h"
#include "printer.h"
#include "types.h"
#include "vic.h"
#include "vic20.h"
#include "vic20iec.h"
#include "vic20via.h"

#ifdef HAVE_RS232
#include "rsuser.h"
#endif


#define myclk           (*(via_context->clk_ptr))
#define myvia           (via_context->via)
#define myviaifr        (via_context->ifr)
#define myviaier        (via_context->ier)
#define myviatal        (via_context->tal)
#define myviatbl        (via_context->tbl)
#define myviatau        (via_context->tau)
#define myviatbu        (via_context->tbu)
#define myviatai        (via_context->tai)
#define myviatbi        (via_context->tbi)
#define myviapb7        (via_context->pb7)
#define myviapb7x       (via_context->pb7x)
#define myviapb7o       (via_context->pb7o)
#define myviapb7xx      (via_context->pb7xx)
#define myviapb7sx      (via_context->pb7sx)
#define oldpa           (via_context->oldpa)
#define oldpb           (via_context->oldpb)
#define myvia_ila       (via_context->ila)
#define myvia_ilb       (via_context->ilb)
#define ca2_state       (via_context->ca2_state)
#define cb2_state       (via_context->cb2_state)
#define myvia_t1_alarm  (via_context->t1_alarm)
#define myvia_t2_alarm  (via_context->t2_alarm)

#define via_read_clk    (via_context->read_clk)
#define via_read_offset (via_context->read_offset)
#define via_last_read   (via_context->last_read)
#define snap_module_name (via_context->my_module_name)

#define myvia_int_num   (via_context->int_num)
#define MYVIA_INT       (via_context->irq_line)

#define mycpu_rmw_flag  (*(via_context->rmw_flag))

#define myvia_reset     via2_reset

#define myvia_store     via2x_store
#define myvia_read      via2x_read
#define myvia_peek      via2x_peek

void REGPARM2 myvia_store(via_context_t *via_context, WORD addr, BYTE data);
BYTE REGPARM1 myvia_read(via_context_t *via_context, WORD addr);
BYTE REGPARM1 myvia_peek(via_context_t *via_context, WORD addr);

void REGPARM2 via2_store(WORD addr, BYTE data)
{
    myvia_store(&(machine_context.via2), addr, data);
}

BYTE REGPARM1 via2_read(WORD addr)
{
    return myvia_read(&(machine_context.via2), addr);
}

BYTE REGPARM1 via2_peek(WORD addr)
{
    return myvia_peek(&(machine_context.via2), addr);
}

#define myvia_log       (via_context->log)
#define myvia_signal    via2_signal
#define myvia_snapshot_read_module via2_snapshot_read_module
#define myvia_snapshot_write_module via2_snapshot_write_module


static void via_set_ca2(int state)
{
}

static void via_set_cb2(int state)
{
}

static void via_set_int(via_context_t *via_context, unsigned int int_num,
                        int value)
{
    interrupt_set_nmi(maincpu_int_status, int_num, value,
                      *(via_context->clk_ptr));
}

void vic20via2_setup_context(machine_context_t *machine_context)
{
    machine_context->via2.context = NULL;

    machine_context->via2.rmw_flag = &maincpu_rmw_flag;
    machine_context->via2.clk_ptr = &maincpu_clk;

    sprintf(machine_context->via2.myname, "Via2");
    sprintf(machine_context->via2.my_module_name, "VIA2");
    machine_context->via2.read_clk = 0;
    machine_context->via2.read_offset = 0;
    machine_context->via2.last_read = 0;
    machine_context->via2.irq_line = IK_NMI;
    machine_context->via2.log = LOG_ERR;
}

static int tape_sense = 0;

void via2_set_tape_sense(int v)
{
    tape_sense = v;
}

static void undump_pra(via_context_t *via_context, BYTE byte)
{
    iec_pa_write(byte);
}

inline static void store_pra(via_context_t *via_context, BYTE byte,
                             BYTE myoldpa, WORD addr)
{
    if (!(byte & 0x20) && (myoldpa & 0x20))
        vic_trigger_light_pen(maincpu_clk);

    iec_pa_write(byte);
}

static void undump_prb(via_context_t *via_context, BYTE byte)
{
    printer_interface_userport_write_data(byte);
}

inline static void store_prb(via_context_t *via_context, BYTE byte,
                             BYTE myoldpb, WORD addr)
{
    printer_interface_userport_write_data(byte);
#ifdef HAVE_RS232
    rsuser_write_ctrl(byte);
#endif
}

static void undump_pcr(via_context_t *via_context, BYTE byte)
{
}

static void res_via(via_context_t *via_context)
{
/*    iec_pa_write(0xff);*/

    printer_interface_userport_write_data(0xff);
    printer_interface_userport_write_strobe(1);
#ifdef HAVE_RS232
    rsuser_write_ctrl(0xff);
    rsuser_set_tx_bit(1);
#endif
}

inline static BYTE store_pcr(via_context_t *via_context, BYTE byte, WORD addr)
{
    /* FIXME: should use via_set_ca2() and via_set_cb2() */
    if (byte != myvia[VIA_PCR]) {
        register BYTE tmp = byte;
        /* first set bit 1 and 5 to the real output values */
        if ((tmp & 0x0c) != 0x0c)
            tmp |= 0x02;
        if ((tmp & 0xc0) != 0xc0)
            tmp |= 0x20;

    datasette_set_motor(!(byte & 0x02));

#ifdef HAVE_RS232
    /* switching userport strobe with CB2 */
        if(rsuser_enabled) {
            rsuser_set_tx_bit(byte & 0x20);
        }
#endif
        printer_interface_userport_write_strobe(byte & 0x20);
    }
    return byte;
}

static void undump_acr(via_context_t *via_context, BYTE byte)
{
}

inline void static store_acr(via_context_t *via_context, BYTE byte)
{
}

inline void static store_sr(via_context_t *via_context, BYTE byte)
{
}

inline void static store_t2l(via_context_t *via_context, BYTE byte)
{
}

inline static BYTE read_pra(via_context_t *via_context, WORD addr)
{
    BYTE byte;
    BYTE joy_bits;

    /*
        Port A is connected this way:

        bit 0  IEC clock
        bit 1  IEC data
        bit 2  joystick switch 0 (up)
        bit 3  joystick switch 1 (down)
        bit 4  joystick switch 2 (left)
        bit 5  joystick switch 4 (fire)
        bit 6  tape sense
        bit 7  IEC ATN
    */

    /* Setup joy bits (2 through 5).  Use the `or' of the values
       of both joysticks so that it works with every joystick
       setting.  This is a bit slow... we might think of a
       faster method.  */
    joy_bits = ~(joystick_value[1] | joystick_value[2]);
    joy_bits = ((joy_bits & 0x7) << 2) | ((joy_bits & 0x10) << 1);

    joy_bits |= tape_sense ? 0 : 0x40;

    /* We assume `iec_pa_read()' returns the non-IEC bits
       as zeroes. */
    byte = ((myvia[VIA_PRA] & myvia[VIA_DDRA])
           | ((iec_pa_read() | joy_bits) & ~myvia[VIA_DDRA]));
    return byte;
}

inline static BYTE read_prb(via_context_t *via_context)
{
    BYTE byte;
    byte = myvia[VIA_PRB] | ~myvia[VIA_DDRB];
#ifdef HAVE_RS232
    byte = rsuser_read_ctrl();
#else
    byte = 0xff;
#endif
    return byte;
}

void printer_interface_userport_set_busy(int b)
{
    via2_signal(&(machine_context.via2),
                VIA_SIG_CB1, b ? VIA_SIG_RISE : VIA_SIG_FALL);
}

static void clk_overflow_callback(via_context_t *, CLOCK, void *);
static void int_myviat1(via_context_t *, CLOCK);
static void int_myviat2(via_context_t *, CLOCK);

static void clk_overflow_callback_via2(CLOCK sub, void *data)
{
    clk_overflow_callback(&(machine_context.via2), sub, data);
}

static void int_via2t1(CLOCK c)
{
    int_myviat1(&(machine_context.via2), c);
}

static void int_via2t2(CLOCK c)
{
    int_myviat2(&(machine_context.via2), c);
}

void via2_init(via_context_t *via_context)
{
    char buffer[16];

    via_context->log = log_open(via_context->my_module_name);

    sprintf(buffer, "%sT1", via_context->myname);
    via_context->t1_alarm = alarm_new(maincpu_alarm_context, buffer,
                            int_via2t1);
    sprintf(buffer, "%sT2", via_context->myname);
    via_context->t2_alarm = alarm_new(maincpu_alarm_context, buffer,
                            int_via2t2);

    via_context->int_num = interrupt_cpu_status_int_new(maincpu_int_status,
                                                        via_context->myname);

    clk_guard_add_callback(maincpu_clk_guard, clk_overflow_callback_via2, NULL);}

#define VIA_SHARED_CODE

#include "viacore.c"

