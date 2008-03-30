/*
 * delaep64.c - Cartridge handling, Dela EP64 cart.
 *
 * Written by
 *  Michael Klein <michael.klein@puffin.lb.shuttle.de>
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
#include <stdlib.h>
#include <string.h>

#include "c64cart.h"
#include "c64cartmem.h"
#include "c64export.h"
#include "delaep64.h"
#include "types.h"
#include "vicii-phi1.h"

/*
 * for cart schematics, see http://a98.shuttle.de/~michael/dela-ep64/
 */

static const c64export_resource_t export_res = {
    "Dela EP64", 1, 0, 1, 0
};

static void delaep64_io1(BYTE value, unsigned int mode)
{
    BYTE bank, config;

    /* D7 -> EXROM */
    config = (value & 0x80) ? 2 : 0;
    cartridge_config_changed(config, config, mode);

    /*
     * bank 0: 2764 (left socket)
     * bank 4-7: 1st 27256 (middle socket)
     * bank 7-11: 2nd 27256 (right socket)
     */
    bank = ((value & 0x30) >> 4) + ((value & 0x03) << 2);
    if (bank < 4 || bank > 11)
        bank = 0;

    cartridge_romlbank_set(bank);
}

BYTE REGPARM1 delaep64_io1_read(WORD addr)
{
    BYTE value = vicii_read_phi1();
    delaep64_io1(value, CMODE_READ);
    return value;
}

void REGPARM2 delaep64_io1_store(WORD addr, BYTE value)
{
    delaep64_io1(value, CMODE_WRITE);
}

void delaep64_config_init(void)
{
    delaep64_io1(0, CMODE_READ);
}

void delaep64_config_setup(BYTE *rawcart)
{
    delaep64_io1(0, CMODE_READ);
}

int delaep64_crt_attach(FILE *fd, BYTE *rawcart)
{
    WORD chip;
    WORD address;
    WORD size;
    BYTE chipheader[0x10];

    /*
     * 0x00000-0x01fff: 2764
     * 0x01fff-0x07fff: unused
     * 0x08000-0x0ffff: 1st 27256
     * 0x10000-0x17fff: 2nd 27256
     */
    memset(roml_banks, 0xff, 0x18000);

    while (1)
    {
        if (fread(chipheader, 0x10, 1, fd) < 1)
            break;

        chip    = (chipheader[0x0a] << 8) + chipheader[0x0b];
        address = (chipheader[0x0c] << 8) + chipheader[0x0d];
        size    = (chipheader[0x0e] << 8) + chipheader[0x0f];

        if (chip > 2)
            return -1;

        if (fread(roml_banks + (chip << 15) + address, size , 1, fd) < 1)
            return -1;
    }

    if (c64export_add(&export_res) < 0)
        return -1;

    return 0;
}

void delaep64_detach(void)
{
    c64export_remove(&export_res);
}

