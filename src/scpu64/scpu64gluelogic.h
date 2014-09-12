/*
 * scpu64gluelogic.h - SCPU64 glue logic emulation.
 *
 * Written by
 *  Hannu Nuotio <hannu.nuotio@tut.fi>
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

#ifndef VICE_SCPU64GLUELOGIC_H
#define VICE_SCPU64GLUELOGIC_H

#include "types.h"

#define GLUE_LOGIC_DISCRETE  0
#define GLUE_LOGIC_CUSTOM_IC 1

extern void c64_glue_set_vbank(int vbank, int ddr_flag);
extern void c64_glue_undump(int vbank);
extern void c64_glue_reset(void);

extern void scpu64_glue_init(void);
extern int scpu64_glue_resources_init(void);
extern int scpu64_glue_cmdline_options_init(void);

struct snapshot_s;

extern int scpu64_glue_snapshot_write_module(struct snapshot_s *s);
extern int scpu64_glue_snapshot_read_module(struct snapshot_s *s);

#endif
