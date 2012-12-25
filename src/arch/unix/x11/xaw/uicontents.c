/*
 * uicontents.c - Xaw only, UI controls for image contents (disk and tape)
 *
 * Written by
 *  Olaf Seibert <rhialto@falu.nl>
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

/* #define DEBUG_X11UI */

#ifdef DEBUG_X11UI
#define DBG(_x_) log_debug _x_
#else
#define DBG(_x_)
#endif

#include "vice.h"

#include <string.h>

#include "autostart.h"
#include "imagecontents/diskcontents.h"
#include "lib.h"
#include "machine.h"
#include "imagecontents/tapecontents.h"
#include "ui.h"
#include "uiapi.h"
#include "uiarch.h"
#include "uicontents.h"
#include "uimenu.h"
#include "util.h"
#include "video.h"
#include "resources.h"
#include "videoarch.h"
#include "x11menu.h"

#include <X11/Xlib.h>
#include <X11/Intrinsic.h>

/*extern int have_cbm_font;*/
int have_cbm_font = 0;

extern char last_attached_images[NUM_DRIVES][256]; /* FIXME: We want this to be static.  */
extern char *last_attached_tape;  /* FIXME: We want this to be static.  */

static UI_CALLBACK(ui_popup_selected_file)
{
    int unit = (vice_ptr_to_int(UI_MENU_CB_PARAM)) >> 24;
    int selected = (vice_ptr_to_int(UI_MENU_CB_PARAM)) & 0x00ffffff;
    char *tmp;

    if (unit > 8) {
        ui_message(_("Autostart not possible for unit %d"), unit);
        return;
    } else if (unit == 8) {
        tmp = lib_stralloc(last_attached_images[0]);
        if (autostart_disk(last_attached_images[0], NULL, selected, AUTOSTART_MODE_RUN) < 0) {
            ui_error(_("Can't autostart selection %d in image %s"), selected, tmp);
        }
        lib_free(tmp);
    } else if (unit == 1) {
#if 0
        tmp = lib_stralloc(last_attached_tape);
        if (autostart_tape(last_attached_tape, NULL, selected, AUTOSTART_MODE_RUN) < 0) {
            ui_error(_("Can't autostart selection %d in image %s"), selected, tmp);
        }
        lib_free(tmp);
#endif
    }
}

Widget rebuild_contents_menu(char *menuname, int unit, const char *name)
{
    ui_menu_entry_t *menu;
    int limit = 16;
    int fno = 0, mask, i;
    char *title, *tmp, *tmp1;
    Widget menu_widget;
    //GtkStyle *menu_entry_style;
    image_contents_t *s;
    image_contents_file_list_t *element;

    s = (unit == 1) ? tapecontents_read(name) : diskcontents_filesystem_read(name);

    if (s == NULL) {
        return (Widget)0;
    }

    menu = lib_calloc(sizeof(ui_menu_entry_t), limit + 1);
    /* +1 because we have to store NULL as end delimiter */

    mask = unit << 24;
    memset(menu, 0, 2 * sizeof(ui_menu_entry_t));
    util_fname_split(name, NULL, &title);
    for (tmp = title; *tmp; tmp++) {
        *tmp = util_toupper(*tmp);
    }
    menu[fno].string = lib_stralloc(title);
    menu[fno].callback = (ui_callback_t) ui_popup_selected_file;
    menu[fno].callback_data = (ui_callback_data_t)int_to_void_ptr(fno | mask);
    menu[fno].sub_menu = NULL;
    menu[fno].hotkey_keysym = 0;
    menu[fno].hotkey_modifier = 0;
    fno++;
    menu[fno].string = lib_stralloc("--");
    fno++;
    tmp1 = image_contents_to_string(s, !have_cbm_font);
    menu[fno].string = (char *)lib_stralloc(tmp1);
    menu[fno].callback = (ui_callback_t) ui_popup_selected_file;
    menu[fno].callback_data = (ui_callback_data_t)int_to_void_ptr((fno - 2) | mask);
    menu[fno].sub_menu = NULL;
    menu[fno].hotkey_keysym = 0;
    menu[fno].hotkey_modifier = 0;
    lib_free(tmp1);
    fno++;

    for (element = s->file_list; element != NULL; element = element->next) {
        if (fno >= limit) {
            limit *= 2;
            menu = lib_realloc(menu, (limit + 1) * sizeof(ui_menu_entry_t)); /* ditto */
        }

        tmp1 = (char *)image_contents_file_to_string(element, !have_cbm_font);

        if (tmp1[0] == '-') {
            tmp1[0] = ' ';          /* Arg, this is the line magic */ 
        }
        menu[fno].string = lib_stralloc(tmp1);
        menu[fno].callback = (ui_callback_t) ui_popup_selected_file;
        menu[fno].callback_data = (ui_callback_data_t)int_to_void_ptr((fno - 2) | mask);
        menu[fno].sub_menu = NULL;
        menu[fno].hotkey_keysym = 0;
        menu[fno].hotkey_modifier = 0;
        lib_free(tmp1);
        fno++;
    }
    if (s->blocks_free >= 0) {
        menu[fno].string = lib_msprintf("%d BLOCKS FREE.", s->blocks_free);
        menu[fno].callback = (ui_callback_t) ui_popup_selected_file;
        menu[fno].callback_data = (ui_callback_data_t)int_to_void_ptr((fno - 1) | mask);
        menu[fno].sub_menu = NULL;
        menu[fno].hotkey_keysym = 0;
        menu[fno].hotkey_modifier = 0;
    }
    memset(&menu[fno++], 0, sizeof(ui_menu_entry_t)); /* end delimiter */

    menu_widget = ui_menu_create(menuname, menu, NULL);

    /* Cleanup */
    for (i = 0; i < fno; i++) {
        lib_free(menu[i].string);
    }
    lib_free(title);
    lib_free(menu);
    image_contents_destroy(s);

    return menu_widget;
}
 
