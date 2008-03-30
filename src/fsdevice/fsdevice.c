/*
 * fsdevice.c - File system device.
 *
 * Written by
 *  Andreas Boose <viceteam@t-online.de>
 *
 * Based on old code by
 *  Teemu Rantanen <tvr@cs.hut.fi>
 *  Jarkko Sonninen <sonninen@lut.fi>
 *  Jouko Valta <jopi@stekt.oulu.fi>
 *  Olaf Seibert <rhialto@mbfys.kun.nl>
 *  Andr� Fachat <a.fachat@physik.tu-chemnitz.de>
 *  Ettore Perazzoli <ettore@comm2000.it>
 *  Martin Pottendorfer <Martin.Pottendorfer@aut.alcatel.at>
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

#include "attach.h"
#include "cbmdos.h"
#include "fileio.h"
#include "fsdevice-close.h"
#include "fsdevice-flush.h"
#include "fsdevice-open.h"
#include "fsdevice-read.h"
#include "fsdevice-resources.h"
#include "fsdevice-write.h"
#include "fsdevice.h"
#include "fsdevicetypes.h"
#include "ioutil.h"
#include "lib.h"
#include "log.h"
#include "machine-bus.h"
#include "resources.h"
#include "tape.h"
#include "vdrive-command.h"
#include "vdrive.h"


#ifdef HAVE_LIMITS_H
#include <limits.h>
#endif

#ifndef PATH_MAX
#  ifdef MAX_PATH
#    define PATH_MAX MAX_PATH
#  else
#    define PATH_MAX 1024
#  endif
#endif


#define FSDEVICE_DEV_MAX 16

fs_buffer_info_t fs_info[FSDEVICE_DEV_MAX];

/* this should somehow go into the fs_info struct... */

static char fs_errorl[4][PATH_MAX];
static unsigned int fs_eptr[4];
static size_t fs_elen[4];

/* ------------------------------------------------------------------------- */

void fsdevice_set_directory(char *filename, unsigned int unit)
{
    switch (unit) {
      case 8:
        resources_set_value("FSDevice8Dir", (resource_value_t)filename);
        break;
      case 9:
        resources_set_value("FSDevice9Dir", (resource_value_t)filename);
        break;
      case 10:
        resources_set_value("FSDevice10Dir", (resource_value_t)filename);
        break;
      case 11:
        resources_set_value("FSDevice11Dir", (resource_value_t)filename);
        break;
      default:
        log_message(LOG_DEFAULT, "Invalid unit number %d.", unit);
    }
    return;
}

char *fsdevice_get_path(unsigned int unit)
{
    switch (unit) {
      case 8:
      case 9:
      case 10:
      case 11:
        return fsdevice_dir[unit - 8];
      default:
        log_error(LOG_DEFAULT,
                  "fsdevice_get_path() called with invalid device %d.", unit);
        break;
    }
    return NULL;
}

void fsdevice_error(vdrive_t *vdrive, int code)
{
    unsigned int dnr;
    static int last_code[4];
    const char *message;

    dnr = vdrive->unit - 8;

    /* Only set an error once per command */
    if (code != CBMDOS_IPE_OK && last_code[dnr] != CBMDOS_IPE_OK
        && last_code[dnr] != CBMDOS_IPE_DOS_VERSION)
        return;

    last_code[dnr] = code;

    if (code != CBMDOS_IPE_MEMORY_READ) {
        if (code == CBMDOS_IPE_DOS_VERSION)
            message = "VICE FS DRIVER V2.0";
        else
            message = cbmdos_errortext(code);

        sprintf(fs_errorl[dnr], "%02d,%s,00,00\015", code, message);

        fs_elen[dnr] = strlen(fs_errorl[dnr]);

        if (code && code != CBMDOS_IPE_DOS_VERSION)
            log_message(LOG_DEFAULT, "Fsdevice: ERR = %02d, %s", code, message);
    } else {
        memcpy(fs_errorl[dnr], vdrive->mem_buf, vdrive->mem_length);
        fs_elen[dnr]  = vdrive->mem_length;

    }

    fs_eptr[dnr] = 0;
}

int fsdevice_error_get_byte(vdrive_t *vdrive, BYTE *data)
{
    unsigned int dnr;
    int rc;

    dnr = vdrive->unit - 8;
    rc = SERIAL_OK;

    if (!fs_elen[dnr])
        fsdevice_error(vdrive, CBMDOS_IPE_OK);

    *data = (BYTE)fs_errorl[dnr][fs_eptr[dnr]++];
    if (fs_eptr[dnr] >= fs_elen[dnr]) {
        fsdevice_error(vdrive, CBMDOS_IPE_OK);
        rc = SERIAL_EOF;
    }

#if 0
    if (fs_eptr[dnr] < fs_elen[dnr]) {
        *data = (BYTE)fs_errorl[dnr][fs_eptr[dnr]++];
        rc = SERIAL_OK;
    } else {
        fsdevice_error(vdrive, CBMDOS_IPE_OK);
        *data = 0xc7;
        rc = SERIAL_EOF;
    }
#endif

    return rc;
}

int fsdevice_attach(unsigned int device, const char *name)
{
    vdrive_t *vdrive;

    vdrive = file_system_get_vdrive(device);

    if (machine_bus_device_attach(device, name, fsdevice_read, fsdevice_write,
                                  fsdevice_open, fsdevice_close,
                                  fsdevice_flush, NULL))
        return 1;

    vdrive->image_format = VDRIVE_IMAGE_FORMAT_1541;
    fsdevice_error(vdrive, CBMDOS_IPE_DOS_VERSION);
    return 0;
}

void fsdevice_init(void)
{
    unsigned int i;

    for (i = 0; i < FSDEVICE_DEV_MAX; i++) {
        fs_info[i].tape = (tape_image_t *)lib_calloc(1, sizeof(tape_image_t));
        fs_info[i].dir = (char *)lib_calloc(1, ioutil_maxpathlen());
        fs_info[i].name = (BYTE *)lib_calloc(1, ioutil_maxpathlen());
        fs_info[i].fs_dirmask = (char *)lib_calloc(1, ioutil_maxpathlen());
    }
}

void fsdevice_shutdown(void)
{
    unsigned int i;

    for (i = 0; i < FSDEVICE_DEV_MAX; i++) {
        lib_free(fs_info[i].tape);
        lib_free(fs_info[i].dir);
        lib_free(fs_info[i].name);
        lib_free(fs_info[i].fs_dirmask);
    }
}

