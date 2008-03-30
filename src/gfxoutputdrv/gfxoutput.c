/*
 * gfxoutput.c - Graphics output driver.
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

#include "vice.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bmpdrv.h"
#include "gfxoutput.h"
#include "lib.h"
#include "log.h"
#include "iffdrv.h"
#include "pcxdrv.h"
#include "ppmdrv.h"

#ifdef HAVE_PNG
#include "pngdrv.h"
#endif

#ifdef HAVE_GIF
#include "gifdrv.h"
#endif

#ifdef HAVE_JPEG
#include "jpegdrv.h"
#endif

#ifdef HAVE_FFMPEG
#include "ffmpegdrv.h"
#include "ffmpeglib.h"
#endif


struct gfxoutputdrv_list_s {
    struct gfxoutputdrv_s *drv;
    struct gfxoutputdrv_list_s *next;
};
typedef struct gfxoutputdrv_list_s gfxoutputdrv_list_t;

static gfxoutputdrv_list_t *gfxoutputdrv_list = NULL;
static int gfxoutputdrv_list_count = 0;
static log_t gfxoutput_log = LOG_ERR;
static gfxoutputdrv_list_t *gfxoutputdrv_list_iter = NULL;


int gfxoutput_num_drivers(void)
{
    return gfxoutputdrv_list_count;
}

gfxoutputdrv_t *gfxoutput_drivers_iter_init(void)
{
    gfxoutputdrv_list_iter = gfxoutputdrv_list;
    return gfxoutputdrv_list_iter->drv;
}

gfxoutputdrv_t *gfxoutput_drivers_iter_next(void)
{
    if (gfxoutputdrv_list_iter)
        gfxoutputdrv_list_iter = gfxoutputdrv_list_iter->next;

    if (gfxoutputdrv_list_iter)
        return gfxoutputdrv_list_iter->drv;

    return NULL;
}

int gfxoutput_early_init(void)
{
    /* Initialize graphics output driver list.  */
    gfxoutputdrv_list
        = (gfxoutputdrv_list_t *)lib_malloc(sizeof(gfxoutputdrv_list_t));
    gfxoutputdrv_list->drv = NULL;
    gfxoutputdrv_list->next = NULL;

    gfxoutput_init_bmp();
#ifdef HAVE_GIF
    gfxoutput_init_gif();
#endif
    gfxoutput_init_iff();
#ifdef HAVE_JPEG
    gfxoutput_init_jpeg();
#endif
    gfxoutput_init_pcx();
#ifdef HAVE_PNG
    gfxoutput_init_png();
#endif
    gfxoutput_init_ppm();
#ifdef HAVE_FFMPEG
    gfxoutput_init_ffmpeg();
#endif

    return 0;
}

int gfxoutput_init(void)
{
    gfxoutput_log = log_open("Graphics Output");

    return 0;
}

void gfxoutput_shutdown(void)
{
    gfxoutputdrv_list_t *list, *next;

    list = gfxoutputdrv_list;

    while (list != NULL) {
        next = list->next;
        lib_free(list);
        list = next;
    }

#ifdef HAVE_FFMPEG
    ffmpegdrv_shutdown();
#endif
}

/*-----------------------------------------------------------------------*/

int gfxoutput_register(gfxoutputdrv_t *drv)
{
    gfxoutputdrv_list_t *current;

    current = gfxoutputdrv_list;

    /* Warp to end of list.  */
    while (current->next != NULL)
        current = current->next;

    /* Fill in entry.  */
    current->drv = drv;
    current->next = (gfxoutputdrv_list_t *)lib_malloc(
                    sizeof(gfxoutputdrv_list_t));
    current->next->drv = NULL;
    current->next->next = NULL;

    gfxoutputdrv_list_count++;

    return 0;
}

gfxoutputdrv_t *gfxoutput_get_driver(const char *drvname)
{
    gfxoutputdrv_list_t *current = gfxoutputdrv_list;

    while (current->next != NULL) {
       if (strcmp(drvname, current->drv->name) == 0
           || strcmp(drvname, current->drv->displayname) == 0)
           break;
       current = current->next;
    }

    /* Requested graphics output driver is not registered.  */
    if (current->next == NULL) {
        log_error(gfxoutput_log,
                  "Requested graphics output driver %s not found.",
                  drvname);
        return NULL;
    }
    return current->drv;
}

int  gfxoutput_resources_init()
{
#ifdef HAVE_FFMPEG
    if (ffmpegdrv_resources_init() < 0)
        return -1;
#endif

    return 0;
}

int gfxoutput_cmdline_options_init()
{
#ifdef HAVE_FFMPEG
    if (ffmpegdrv_cmdline_options_init() < 0)
        return -1;
#endif

    return 0;
}
