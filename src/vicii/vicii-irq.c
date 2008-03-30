/*
 * vicii-irq.c - IRQ related functions for the MOS 6569 (VIC-II) emulation.
 *
 * Written by
 *  Andreas Boose <viceteam@t-online.de>
 *  Ettore Perazzoli <ettore@comm2000.it>
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

#include "alarm.h"
#include "interrupt.h"
#include "maincpu.h"
#include "types.h"
#include "vicii-irq.h"
#include "viciitypes.h"


inline void vicii_irq_set_line(void)
{
    if (vic_ii.irq_status & vic_ii.regs[0x1a]) {
        vic_ii.irq_status |= 0x80;
        maincpu_set_irq(vic_ii.int_num, 1);
    } else {
        vic_ii.irq_status &= 0x7f;
        maincpu_set_irq(vic_ii.int_num, 0);
    }
}

static inline void vicii_irq_set_line_clk(CLOCK mclk)
{
    if (vic_ii.irq_status & vic_ii.regs[0x1a]) {
        vic_ii.irq_status |= 0x80;
        maincpu_set_irq_clk(vic_ii.int_num, 1, mclk);
    } else {
        vic_ii.irq_status &= 0x7f;
        maincpu_set_irq_clk(vic_ii.int_num, 0, mclk);
    }
}

void vicii_irq_raster_set(CLOCK mclk)
{
    vic_ii.irq_status |= 0x1;
    vicii_irq_set_line_clk(mclk);
}

void vicii_irq_raster_clear(CLOCK mclk)
{
    vic_ii.irq_status &= 0xfe;
    vicii_irq_set_line_clk(mclk);
}

void vicii_irq_sbcoll_set(void)
{
    vic_ii.irq_status |= 0x2;
    vicii_irq_set_line();
}

void vicii_irq_sbcoll_clear(void)
{
    vic_ii.irq_status &= 0xfd;
    vicii_irq_set_line();
}

void vicii_irq_sscoll_set(void)
{
    vic_ii.irq_status |= 0x4;
    vicii_irq_set_line();
}

void vicii_irq_sscoll_clear(void)
{
    vic_ii.irq_status &= 0xfb;
    vicii_irq_set_line();
}

void vicii_irq_lightpen_set(CLOCK mclk)
{
    vic_ii.irq_status |= 0x8;
    vicii_irq_set_line_clk(mclk);
}

void vicii_irq_lightpen_clear(CLOCK mclk)
{
    vic_ii.irq_status &= 0xf7;
    vicii_irq_set_line_clk(mclk);
}

void vicii_irq_set_raster_line(unsigned int line)
{
    if (line == vic_ii.raster_irq_line && vic_ii.raster_irq_clk != CLOCK_MAX)
        return;

    if (line < (unsigned int)vic_ii.screen_height) {
        unsigned int current_line = VIC_II_RASTER_Y(maincpu_clk);

        vic_ii.raster_irq_clk = (VIC_II_LINE_START_CLK(maincpu_clk)
                                 + VIC_II_RASTER_IRQ_DELAY - INTERRUPT_DELAY
                                 + (vic_ii.cycles_per_line
                                 * (line - current_line)));

        /* Raster interrupts on line 0 are delayed by 1 cycle.  */
        if (line == 0)
            vic_ii.raster_irq_clk++;

        if (line <= current_line)
            vic_ii.raster_irq_clk += (vic_ii.screen_height
                                     * vic_ii.cycles_per_line);
        alarm_set(vic_ii.raster_irq_alarm, vic_ii.raster_irq_clk);
    } else {
        VIC_II_DEBUG_RASTER(("update_raster_irq(): "
                            "raster compare out of range ($%04X)!", line));
        vic_ii.raster_irq_clk = CLOCK_MAX;
        alarm_unset(vic_ii.raster_irq_alarm);
    }

    VIC_II_DEBUG_RASTER(("update_raster_irq(): "
                        "vic_ii.raster_irq_clk = %ul, "
                        "line = $%04X, "
                        "vic_ii.regs[0x1a] & 1 = %d",
                        vic_ii.raster_irq_clk, line, vic_ii.regs[0x1a] & 1));

    vic_ii.raster_irq_line = line;
}

void vicii_irq_check_state(BYTE value, unsigned int high)
{
    unsigned int irq_line, line;
    unsigned int old_raster_irq_line;

    if (high)
        irq_line = (vic_ii.raster_irq_line & 0xff) | ((value & 0x80) << 1);
    else
        irq_line = (vic_ii.raster_irq_line & 0x100) | value;

    if (irq_line == vic_ii.raster_irq_line)
        return;

    line = VIC_II_RASTER_Y(maincpu_clk);

    old_raster_irq_line = vic_ii.raster_irq_line;
    vicii_irq_set_raster_line(irq_line);

    if (vic_ii.regs[0x1a] & 0x1) {
        int trigger_irq;

        trigger_irq = 0;

        if (maincpu_rmw_flag) {
            if (high) {
                if (VIC_II_RASTER_CYCLE(maincpu_clk) == 0
                    && (line & 0xff) == 0) {
                    unsigned int previous_line = VIC_II_PREVIOUS_LINE(line);

                    if (previous_line != old_raster_irq_line
                        && ((old_raster_irq_line & 0xff)
                        == (previous_line & 0xff)))
                        trigger_irq = 1;
                } else {
                    if (line != old_raster_irq_line
                        && (old_raster_irq_line & 0xff) == (line & 0xff))
                        trigger_irq = 1;
                }
            } else {
                if (VIC_II_RASTER_CYCLE(maincpu_clk) == 0) {
                    unsigned int previous_line = VIC_II_PREVIOUS_LINE(line);

                    if (previous_line != old_raster_irq_line
                        && ((old_raster_irq_line & 0x100)
                        == (previous_line & 0x100)))
                        trigger_irq = 1;
                } else {
                    if (line != old_raster_irq_line
                        && (old_raster_irq_line & 0x100) == (line & 0x100))
                        trigger_irq = 1;
                }
            }
        }

        if (vic_ii.raster_irq_line == line && line != old_raster_irq_line)
            trigger_irq = 1;

        if (trigger_irq)
            vicii_irq_raster_set(maincpu_clk);
    }
}

void vicii_irq_next_frame(void)
{
    vic_ii.raster_irq_clk += vic_ii.screen_height * vic_ii.cycles_per_line;
    alarm_set(vic_ii.raster_irq_alarm, vic_ii.raster_irq_clk);
}

/* If necessary, emulate a raster compare IRQ. This is called when the raster
   line counter matches the value stored in the raster line register.  */
void vicii_irq_alarm_handler(CLOCK offset)
{
    vicii_irq_raster_set(vic_ii.raster_irq_clk);
    vicii_irq_next_frame();
}

void vicii_irq_init(void)
{
    vic_ii.int_num = interrupt_cpu_status_int_new(maincpu_int_status, "VICII");

    vic_ii.raster_irq_alarm = alarm_new(maincpu_alarm_context,
                                        "VicIIRasterIrq",
                                        vicii_irq_alarm_handler);
}

