/*
 * prdevice.c - Printer device.
 *
 * Written by
 *  Andr� Fachat <a.fachat@physik.tu-chemnitz.de>
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

/* FIXME: Should keep its own logging.  */

#include "vice.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cmdline.h"
#include "log.h"
#include "prdevice.h"
#include "print.h"
#include "resources.h"
#include "serial.h"
#include "types.h"
#include "utils.h"
#include "vdrive.h"

/*
 * At this time only one printer is supported and it is attached to
 * device 4.
 * Secondary address simply switched conversion modes (none of them are
 * implemented so far, so secondary address is simply ignored.
 *
 * The actual printing is done via print services in the arch/x/print.c
 * file; prototypes are in print.h
 */

static int prdevice_attach(unsigned int unit);
static int prdevice_detach(unsigned int unit);
static int close_pr(vdrive_t *var, unsigned int secondary);

/***********************************************************************
 * resource handling
 */

static int pr4_device;
static int pr4_enabled;

static int set_pr4_device(resource_value_t v, void *param)
{
    pr4_device = (int)v;
    return 0;
}

static int set_pr4_enabled(resource_value_t v, void *param)
{
    int flag = ((int) v) ? 1 : 0;

    if(pr4_enabled && !flag) {
        prdevice_detach(4);
    }
    if(flag && !pr4_enabled) {
        prdevice_attach(4);
    }
    pr4_enabled = flag;

    return 0;
}

static resource_t resources[] = {
    { "Printer4", RES_INTEGER, (resource_value_t)0,
      (resource_value_t *) &pr4_enabled, set_pr4_enabled, NULL },
    { "Printer4Device", RES_INTEGER, (resource_value_t)0,
      (resource_value_t *) &pr4_device, set_pr4_device, NULL },
    { NULL }
};

int prdevice_init_resources(void)
{
    return resources_register(resources);
}

static cmdline_option_t cmdline_options[] = {
    { "-printer4", SET_RESOURCE, 0, NULL, NULL, "Printer4",
        (resource_value_t)1, NULL,
        "Enable the IEC device #4 printer emulation" },
    { "+printer4", SET_RESOURCE, 0, NULL, NULL, "Printer4",
        (resource_value_t)0, NULL,
        "Disable the IEC device #4 printer emulation" },
    { "-pr4dev", SET_RESOURCE, 1, NULL, NULL, "Printer4Device",
        (resource_value_t)0,
      "<0-2>", "Specify VICE printer device for IEC printer #4" },
    { NULL }
};

int prdevice_init_cmdline_options(void)
{
    return cmdline_register_options(cmdline_options);
}

int prdevice_close_printer(unsigned int unit)
{
    if (unit == 4) {
        close_pr(NULL, -1);
    }
    return 0;
}

void prdevice_late_init(void)
{
    if (pr4_enabled) {
        prdevice_attach(4);
    }
}

/***********************************************************************/

/* These two variables have to be put into a table and the var
 * argument to the functions below has to be used to select the right
 * value to support multiple IEC printer devices */

static int currfd;
static int inuse;

static int open_pr(vdrive_t *var, const char *name, int length,
                   unsigned int secondary)
{
    if (inuse) {
        log_error(LOG_DEFAULT, "Open printer while still open - ignoring.");
        return 0;
    }

    currfd = print_open(pr4_device);
    if (currfd < 0) {
        log_error(LOG_DEFAULT, "Couldn't open device %d.", pr4_device);
        return -1;
    }

    inuse = 1;

    return 0;
}

static int write_pr(vdrive_t *var, BYTE byte, unsigned int secondary)
{
    int er;

    /* FIXME: switch(secondary) for code conversion */

    if (!inuse) {
        /* oh, well, we just assume an implicit open - "OPEN 1,4"
           just does not leave any trace on the serial bus */
        log_warning(LOG_DEFAULT, "Auto-opening printer!");

        er = open_pr(var, NULL, 0, secondary);

        if (er < 0)
            return er;
    }

    return print_putc(currfd, (BYTE)byte);
}

static int close_pr(vdrive_t *var, unsigned int secondary)
{
    if (!inuse) {
        log_error(LOG_DEFAULT, "Close printer while being closed - ignoring.");
        return 0;
    }

    print_close(currfd);
    inuse = 0;

    return 0;
}


static void flush_pr(vdrive_t *var, unsigned int secondary)
{
    if (!inuse) {
        log_error(LOG_DEFAULT, "Flush printer while being closed - ignoring.");
        return;
    }

    print_flush(currfd);
}

static int fn(void)
{
    return 0x80;
}

static int prdevice_attach(unsigned int unit)
{
    int er;

    inuse = 0;

    if ((er = serial_attach_device(unit, "Printer device",
            (int (*)(vdrive_t *, BYTE *, unsigned int))fn,
            write_pr,
            open_pr,
            close_pr,
            flush_pr))) {
        return 1;
    }
    return 0;
}

static int prdevice_detach(unsigned int unit)
{
    if (inuse) {
        flush_pr(NULL, -1);
        close_pr(NULL, -1);
    }

    serial_detach_device(unit);

    return 0;
}

