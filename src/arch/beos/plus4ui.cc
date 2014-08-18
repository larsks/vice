/*
 * plus4ui.c - C64-specific user interface.
 *
 * Written by
 *  Andreas Matthies <andreas.matthies@gmx.net>
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

#include <FilePanel.h>
#include <Menu.h>
#include <MenuBar.h>
#include <MenuItem.h>
#include <Window.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(__BEOS__) && defined(WORDS_BIGENDIAN)
#include <string.h>
#endif

#include "ui_file.h"

extern "C" {
#include "cartridge.h"
#include "constants.h"
#include "plus4cart.h"
#include "plus4model.h"
#include "plus4ui.h"
#include "resources.h"
#include "ui.h"
#include "ui_drive.h"
#include "ui_sidcart.h"
#include "ui_ted.h"
#include "video.h"
}

drive_type_t drive_type[] = {
    { "1541", DRIVE_TYPE_1541 },
    { "1541-II", DRIVE_TYPE_1541II },
    { "1551", DRIVE_TYPE_1551 },
    { "1570", DRIVE_TYPE_1570 },
    { "1571", DRIVE_TYPE_1571 },
    { "1581", DRIVE_TYPE_1581 },
    { "2000", DRIVE_TYPE_2000 },
    { "4000", DRIVE_TYPE_4000 },
    { "None", DRIVE_TYPE_NONE },
    { NULL, 0 }
};

int drive_machine_parallel_capable = 1;

ui_menu_toggle  plus4_ui_menu_toggles[] = {
    { "TEDDoubleSize", MENU_TOGGLE_DOUBLESIZE },
    { "TEDDoubleScan", MENU_TOGGLE_DOUBLESCAN },
    { "TEDVideoCache", MENU_TOGGLE_VIDEOCACHE },
    { "Acia1Enable", MENU_TOGGLE_ACIA },
    { "SIDCartJoy", MENU_TOGGLE_SIDCART_JOY },
    { "SpeechEnabled", MENU_TOGGLE_V364SPEECH },
    { "CartridgeReset", MENU_CART_PLUS4_RESET_ON_CHANGE },
    { NULL, 0 }
};

ui_res_possible_values plus4AciaDevice[] = {
    { 1, MENU_ACIA_RS323_DEVICE_1 },
    { 2, MENU_ACIA_RS323_DEVICE_2 },
    { 3, MENU_ACIA_RS323_DEVICE_3 },
    { 4, MENU_ACIA_RS323_DEVICE_4 },
    { -1, 0 }
};

ui_res_possible_values plus4_RenderFilters[] = {
    { VIDEO_FILTER_NONE, MENU_RENDER_FILTER_NONE },
    { VIDEO_FILTER_CRT, MENU_RENDER_FILTER_CRT_EMULATION },
    { VIDEO_FILTER_SCALE2X, MENU_RENDER_FILTER_SCALE2X },
    { -1, 0 }
};

ui_res_value_list plus4_ui_res_values[] = {
    { "Acia1Dev", plus4AciaDevice },
    { "TEDFilter", plus4_RenderFilters },
    { NULL, NULL }
};

static const char *plus4sidcartaddresspair[] = { "$FD40", "$FE80" };
static const char *plus4sidcartclockpair[] = { "C64", "PLUS4" };

static ui_cartridge_t plus4_ui_cartridges[]={
    { MENU_CART_PLUS4_SMART, CARTRIDGE_PLUS4_DETECT, "Smart attach" },
    { MENU_CART_PLUS4_C0_LOW, CARTRIDGE_PLUS4_16KB_C0LO, "C0 low image" },
    { MENU_CART_PLUS4_C0_HIGH, CARTRIDGE_PLUS4_16KB_C0HI, "C0 high image" },
    { MENU_CART_PLUS4_C1_LOW, CARTRIDGE_PLUS4_16KB_C1LO, "C1 low image" },
    { MENU_CART_PLUS4_C1_HIGH, CARTRIDGE_PLUS4_16KB_C1HI, "C1 high image" },
    { MENU_CART_PLUS4_C2_LOW, CARTRIDGE_PLUS4_16KB_C2LO, "C2 low image" },
    { MENU_CART_PLUS4_C2_HIGH, CARTRIDGE_PLUS4_16KB_C2HI, "C2 high image" },
    { 0, 0, NULL }
};

static void plus4_ui_attach_cartridge(int menu)
{
    int i = 0;

    while (menu != plus4_ui_cartridges[i].menu_item && plus4_ui_cartridges[i].menu_item) {
        i++;
    }

    if (!plus4_ui_cartridges[i].menu_item) {
        ui_error("Bad cartridge config in UI");
        return;
    }

    ui_select_file(B_OPEN_PANEL, PLUS4_CARTRIDGE_FILE, &plus4_ui_cartridges[i]);
}       

static void plus4_ui_specific(void *msg, void *window)
{
    switch (((BMessage*)msg)->what) {
        case MENU_TED_SETTINGS:
            ui_ted();
            break;
        case MENU_CART_PLUS4_SMART:      
        case MENU_CART_PLUS4_C0_LOW:
        case MENU_CART_PLUS4_C0_HIGH:
        case MENU_CART_PLUS4_C1_LOW:
        case MENU_CART_PLUS4_C1_HIGH:
        case MENU_CART_PLUS4_C2_LOW:
        case MENU_CART_PLUS4_C2_HIGH:
            plus4_ui_attach_cartridge(((BMessage*)msg)->what);
            break;
        case MENU_CART_PLUS4_DETACH:
            cartridge_detach_image(-1);
            break;
        case MENU_SIDCART_SETTINGS:
            ui_sidcart(plus4sidcartaddresspair, plus4sidcartclockpair);
            ui_update_menus();
            break;
        case MENU_V364SPEECH_FILE:
            ui_select_file(B_SAVE_PANEL, V364SPEECH_FILE, (void*)0);
            break;
        case MENU_PLUS4_MODEL_C16_PAL:
            plus4model_set(PLUS4MODEL_C16_PAL);
            break;
        case MENU_PLUS4_MODEL_C16_NTSC:
            plus4model_set(PLUS4MODEL_C16_NTSC);
            break;
        case MENU_PLUS4_MODEL_PLUS4_PAL:
            plus4model_set(PLUS4MODEL_PLUS4_PAL);
            break;
        case MENU_PLUS4_MODEL_PLUS4_NTSC:
            plus4model_set(PLUS4MODEL_PLUS4_NTSC);
            break;
        case MENU_PLUS4_MODEL_V364_NTSC:
            plus4model_set(PLUS4MODEL_V364_NTSC);
            break;
        case MENU_PLUS4_MODEL_C232_NTSC:
            plus4model_set(PLUS4MODEL_232_NTSC);
            break;
        case MENU_COMPUTER_KERNAL_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, COMPUTER_KERNAL_ROM_FILE, (void*)0);
            break;
        case MENU_COMPUTER_BASIC_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, COMPUTER_BASIC_ROM_FILE, (void*)0);
            break;
        case MENU_COMPUTER_FUNCTION_LO_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, COMPUTER_FUNCTION_LO_ROM_FILE, (void*)0);
            break;
        case MENU_COMPUTER_FUNCTION_HI_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, COMPUTER_FUNCTION_HI_ROM_FILE, (void*)0);
            break;
        case MENU_DRIVE_1541_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, DRIVE_1541_ROM_FILE, (void*)0);
            break;
        case MENU_DRIVE_1541II_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, DRIVE_1541II_ROM_FILE, (void*)0);
            break;
        case MENU_DRIVE_1551_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, DRIVE_1551_ROM_FILE, (void*)0);
            break;
        case MENU_DRIVE_1570_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, DRIVE_1570_ROM_FILE, (void*)0);
            break;
        case MENU_DRIVE_1571_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, DRIVE_1571_ROM_FILE, (void*)0);
            break;
        case MENU_DRIVE_1581_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, DRIVE_1581_ROM_FILE, (void*)0);
            break;
        case MENU_DRIVE_2000_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, DRIVE_2000_ROM_FILE, (void*)0);
            break;
        case MENU_DRIVE_4000_ROM_FILE:
            ui_select_file(B_SAVE_PANEL, DRIVE_4000_ROM_FILE, (void*)0);
            break;
        default:
            break;
    }
}

int plus4ui_init(void)
{
    ui_register_machine_specific(plus4_ui_specific);
    ui_register_menu_toggles(plus4_ui_menu_toggles);
    ui_register_res_values(plus4_ui_res_values);
    ui_update_menus();
    return 0;
}

void plus4ui_shutdown(void)
{
}
