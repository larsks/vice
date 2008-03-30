/*
 * iecdrive.c - IEC bus handling for the true 1541 emulator.
 *
 * Written by
 *  Daniel Sladic (sladic@eecg.toronto.edu)
 *  Andreas Boose (boose@unixserv.rz.fh-hannover.de)
 *  Ettore Perazzoli (ettore@comm2000.it)
 *  Andr� Fachat (fachat@physik.tu-chemnitz.de)
 *  Teemu Rantanen (tvr@cs.hut.fi)
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


#ifndef _IEC_H
#define _IEC_H

#include "types.h"

void iec_update_ports_embedded(void);
void iec_drive0_write(BYTE data);
void iec_drive1_write(BYTE data);
BYTE iec_drive0_read(void);
BYTE iec_drive1_read(void);
void iec_fast_drive_write(BYTE data);
void iec_fast_cpu_write(BYTE data);
void parallel_cable_drive0_write(BYTE data, int handshake);
void parallel_cable_drive1_write(BYTE data, int handshake);
BYTE parallel_cable_drive_read(int handshake);

typedef struct {
    BYTE drive_bus;
    BYTE drive_port;
    BYTE drive_data;
    BYTE drive2_bus;
    BYTE drive2_port;
    BYTE drive2_data;
    BYTE cpu_bus;
    BYTE cpu_port;
    BYTE iec_fast_1541;
} iec_info_t;

extern iec_info_t *iec_get_drive_port(void);

/* return value for iec_available_busses() (can be ored) */
#define	IEC_BUS_IEC	0x01	/* serial IEC bus */
#define	IEC_BUS_IEEE	0x02	/* parallel IEEE bus */

extern int iec_available_busses(void);
extern void iec_calculate_callback_index(void);

#endif
