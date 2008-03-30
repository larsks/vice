/*
 * uivdc.c
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

#include "fullscreenarch.h"
#include "machine.h"
#include "uimenu.h"
#include "uipalemu.h"
#include "uipalette.h"
#include "uited.h"


UI_MENU_DEFINE_RADIO(MachineVideoStandard)

ui_menu_entry_t set_video_standard_submenu[] = {
    { N_("*PAL-G"), (ui_callback_t)radio_MachineVideoStandard,
      (ui_callback_data_t)MACHINE_SYNC_PAL, NULL },
    { N_("*NTSC-M"), (ui_callback_t)radio_MachineVideoStandard,
      (ui_callback_data_t)MACHINE_SYNC_NTSC, NULL },
    { NULL }
};

UI_MENU_DEFINE_TOGGLE(TEDDoubleSize)
UI_MENU_DEFINE_TOGGLE(TEDDoubleScan)
UI_MENU_DEFINE_TOGGLE(TEDVideoCache)
UI_MENU_DEFINE_TOGGLE(ExternalPalette)
#ifdef USE_XF86_EXTENSIONS
UI_MENU_DEFINE_TOGGLE(TEDFullscreen)
UI_MENU_DEFINE_STRING_RADIO(TEDFullscreenDevice)
UI_MENU_DEFINE_TOGGLE(TEDFullscreenDoubleSize)
UI_MENU_DEFINE_TOGGLE(TEDFullscreenDoubleScan)
#ifdef USE_XF86_VIDMODE_EXT
UI_MENU_DEFINE_RADIO(TEDVidmodeFullscreenMode);
#endif
#ifdef USE_XF86_DGA1_EXTENSIONS
UI_MENU_DEFINE_RADIO(TEDDGA1FullscreenMode);
#endif
#ifdef USE_XF86_DGA2_EXTENSIONS
UI_MENU_DEFINE_RADIO(TEDDGA2FullscreenMode);
#endif

static ui_menu_entry_t set_fullscreen_device_submenu[] = {
#ifdef USE_XF86_VIDMODE_EXT
    { "*Vidmode", (ui_callback_t)radio_TEDFullscreenDevice,
      (ui_callback_data_t)"Vidmode", NULL },
#endif
#ifdef USE_XF86_DGA1_EXTENSIONS
    { "*DGA1", (ui_callback_t)radio_TEDFullscreenDevice,
      (ui_callback_data_t)"DGA1", NULL },
#endif
#ifdef USE_XF86_DGA2_EXTENSIONS
    { "*DGA2", (ui_callback_t)radio_TEDFullscreenDevice,
      (ui_callback_data_t)"DGA2", NULL },
#endif
    { NULL }
};
#endif

ui_menu_entry_t ted_submenu[] = {
    { N_("*Double size"),
      (ui_callback_t)toggle_TEDDoubleSize, NULL, NULL },
    { N_("*Double scan"),
      (ui_callback_t)toggle_TEDDoubleScan, NULL, NULL },
    { N_("*Video cache"),
      (ui_callback_t)toggle_TEDVideoCache, NULL, NULL },
    { "--" },
#ifdef USE_XF86_EXTENSIONS
    { N_("*Enable fullscreen"),
      (ui_callback_t)toggle_TEDFullscreen, NULL, NULL, XK_d, UI_HOTMOD_META },
    { N_("*Double size"),
      (ui_callback_t)toggle_TEDFullscreenDoubleSize, NULL, NULL },
    { N_("*Double scan"),
      (ui_callback_t)toggle_TEDFullscreenDoubleScan, NULL, NULL },
    { N_("Fullscreen device"),
      NULL, NULL, set_fullscreen_device_submenu },
    /* Translators: 'VidMode', 'DGA1' and 'DGA2' must remain in the beginning
       of the translation e.g. German: "VidMode Auflösungen" */
#ifdef USE_XF86_VIDMODE_EXT
    { N_("VidMode Resolutions"),
      (ui_callback_t) NULL, NULL, NULL },
#endif
#ifdef USE_XF86_DGA1_EXTENSIONS
    { N_("DGA1 Resolutions"),
      (ui_callback_t)NULL, NULL, NULL },
#endif
#ifdef USE_XF86_DGA2_EXTENSIONS
    { N_("DGA2 Resolutions"),
      (ui_callback_t)NULL, NULL, NULL },
#endif
    { "--" },
#endif
    { N_("*External color set"),
      (ui_callback_t)toggle_ExternalPalette, NULL, NULL },
    { "--" },
    { N_("PAL Emulation"),
      NULL, NULL, PALMode_submenu },
#if 0
    { N_("Color set"),
      NULL, NULL, palette_submenu },
    { "--" },
    { N_("*Fast PAL emulation"),
      (ui_callback_t)toggle_DelayLoopEmulation, NULL, NULL },
#endif
    { NULL }
};

void uited_create_menus(void)
{
#ifdef USE_XF86_EXTENSIONS
#ifdef USE_XF86_VIDMODE_EXT
    fullscreen_mode_callback("Vidmode",
                             (void *)radio_TEDVidmodeFullscreenMode);
#endif
#ifdef USE_XF86_DGA1_EXTENSIONS
    fullscreen_mode_callback("DGA1",
                             (void *)radio_TEDDGA1FullscreenMode);
#endif
#ifdef USE_XF86_DGA2_EXTENSIONS
    fullscreen_mode_callback("DGA2",
                             (void *)radio_TEDDGA2FullscreenMode);
#endif
    fullscreen_create_menus(ted_submenu);
#endif
}

