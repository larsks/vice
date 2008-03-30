/*
 * uisettings.c - Implementation of common UI settings.
 *
 * Written by
 *  Ettore Perazzoli (ettore@comm2000.it)
 *  Andreas Boose (boose@unixserv.rz.fh-hannover.de)
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
#include <unistd.h>
#include <errno.h>

#include <X11/Intrinsic.h>

#include "uisettings.h"
#include "resources.h"
#include "vsync.h"
#include "true1541.h"
#include "fsdevice.h"
#include "kbd.h"

/* ------------------------------------------------------------------------- */

/* Big kludge to get the ticks right in the refresh rate submenu.  This only
   works if the callback for the "custom" setting is the last one to be
   called, and the "Auto" one is the first one.  */
static int have_custom_refresh_rate;

static UI_CALLBACK(set_refresh_rate)
{
    int current_refresh_rate;

    resources_get_value("RefreshRate",
                        (resource_value_t *) &current_refresh_rate);
    if (!call_data) {
	if (current_refresh_rate != (int) client_data) {
	    resources_set_value("RefreshRate", (resource_value_t) client_data);
	    ui_update_menus();
	}
    } else {
        if ((int)client_data == 0)
            have_custom_refresh_rate = 1;
        if ((int)client_data == current_refresh_rate) {
            ui_menu_set_tick(w, 1);
            have_custom_refresh_rate = 0;
        } else {
            ui_menu_set_tick(w, 0);
        }
	if (client_data == 0) {
            int speed;

            resources_get_value("Speed", (resource_value_t *) &speed);
            if (speed == 0) {
                /* Cannot enable the `automatic' setting if a speed limit is
                   not specified. */
                ui_menu_set_sensitive(w, False);
            } else {
                ui_menu_set_sensitive(w, True);
            }
        }
    }
}

static UI_CALLBACK(set_custom_refresh_rate)
{
    static char input_string[32];
    char msg_string[256];
    ui_button_t button;
    int i, found;
    int current_refresh_rate;

    resources_get_value("RefreshRate",
                        (resource_value_t *) &current_refresh_rate);

    if (!*input_string)
	sprintf(input_string, "%d", current_refresh_rate);

    if (call_data) {
        if (have_custom_refresh_rate)
            ui_menu_set_tick(w, 1);
        else
            ui_menu_set_tick(w, 0);
        have_custom_refresh_rate = 0;
    } else {
        int current_speed;

	suspend_speed_eval();
	sprintf(msg_string, "Enter refresh rate");
	button = ui_input_string("Refresh rate", msg_string, input_string, 32);
	if (button == UI_BUTTON_OK) {
	    i = atoi(input_string);
            resources_get_value("Speed", (resource_value_t *) &current_speed);
	    if (!(current_speed <= 0 && i <= 0) && i >= 0
		&& current_refresh_rate != i) {
                resources_set_value("RefreshRate", (resource_value_t) i);
		ui_update_menus();
	    }
	}
    }
}

/* ------------------------------------------------------------------------- */

/* Big kludge to get the ticks right in the maximum speed submenu.  This only
   works if the callback for the "custom" setting is the last one to be
   called, and the "100%" one is the first one.  */
static int have_custom_maximum_speed;

static UI_CALLBACK(set_maximum_speed)
{
    int current_speed;

    resources_get_value("Speed", (resource_value_t *) &current_speed);

    if (!call_data) {
	if (current_speed != (int)client_data) {
            resources_set_value("Speed", (resource_value_t) client_data);
	    ui_update_menus();
	}
    } else {
        if ((int) client_data == 100)
            have_custom_maximum_speed = 1;
        if (current_speed == (int) client_data) {
            ui_menu_set_tick(w, 1);
            have_custom_maximum_speed = 0;
        } else {
            ui_menu_set_tick(w, 0);
        }
	if (client_data == 0) {
            int current_refresh_rate;

            resources_get_value("RefreshRate",
                                (resource_value_t *) &current_refresh_rate);
	    ui_menu_set_sensitive(w, current_refresh_rate != 0);
	}
    }
}

static UI_CALLBACK(set_custom_maximum_speed)
{
    static char input_string[32];
    char msg_string[256];
    ui_button_t button;
    int i, found;
    int current_speed;

    resources_get_value("Speed", (resource_value_t *) &current_speed);
    if (!*input_string)
	sprintf(input_string, "%d", current_speed);

    if (call_data) {
        if (have_custom_maximum_speed)
            ui_menu_set_tick(w, 1);
        else
            ui_menu_set_tick(w, 0);
        have_custom_maximum_speed = 0;
    } else {
	suspend_speed_eval();
	sprintf(msg_string, "Enter speed");
	button = ui_input_string("Maximum run speed", msg_string, input_string,
				 32);
	if (button == UI_BUTTON_OK) {
            int current_refresh_rate;

            resources_get_value("RefreshRate",
                                (resource_value_t *) &current_refresh_rate);
	    i = atoi(input_string);
	    if (!(current_refresh_rate <= 0 && i <= 0) && i >= 0
		&& current_speed != i) {
                resources_set_value("Speed", (resource_value_t) i);
		ui_update_menus();
	    } else
		ui_error("Invalid speed value");
	}
    }
}

/* ------------------------------------------------------------------------- */

static UI_CALLBACK(save_resources)
{
    suspend_speed_eval();
    if (resources_save(NULL) < 0)
	ui_error("Cannot save settings.");
    else {
	if (w != NULL)
	    ui_message("Settings saved successfully.");
    }
    ui_update_menus();
}

static UI_CALLBACK(load_resources)
{
    suspend_speed_eval();
    if (resources_load(NULL) < 0)
	ui_error("Cannot load settings.");
#if 0
    else if (w != NULL)
            ui_message("Settings loaded.");
#endif
    ui_update_menus();
}

static UI_CALLBACK(set_default_resources)
{
    suspend_speed_eval();
    resources_set_defaults();
    ui_update_menus();
}

/* ------------------------------------------------------------------------- */

UI_MENU_DEFINE_TOGGLE(VideoCache)

UI_MENU_DEFINE_TOGGLE(DoubleSize)

UI_MENU_DEFINE_TOGGLE(DoubleScan)

UI_MENU_DEFINE_TOGGLE(UseXSync)

UI_MENU_DEFINE_TOGGLE(SaveResourcesOnExit)

UI_MENU_DEFINE_TOGGLE(WarpMode)

/* ------------------------------------------------------------------------- */

/* this is modelled after the toggle_* calls */

static UI_CALLBACK(set_keymap_type)
{
     int kindex, newindex = (int) client_data;

     if(resources_get_value("KeymapIndex", (resource_value_t*) &kindex) < 0)
	return;

     if(!call_data) {
	if((kindex & 1) != newindex) {
            resources_set_value("KeymapIndex", (resource_value_t)
		((kindex & ~1) + newindex));
            ui_update_menus();
        }
     } else {
        ui_menu_set_tick(w, (kindex & 1) == newindex);
     }
}

static ui_menu_entry_t keyboard_maptype_submenu[] = {
    { "*Symbol Mapping", (ui_callback_t) set_keymap_type,
	(ui_callback_data_t) 0, NULL },
    { "*Positional Mapping", (ui_callback_t) set_keymap_type,
	(ui_callback_data_t) 1, NULL },
    { NULL }
};

static UI_CALLBACK(select_user_keymap)
{
    char *filename, *resname;
    ui_button_t button;
    int kindex;

    resources_get_value("KeymapIndex", (resource_value_t)&kindex);
    kindex = (kindex & ~1) + (int)client_data;
    resname = keymap_res_name_list[kindex];

    suspend_speed_eval();
    filename = ui_select_file("Read Keymap File", NULL, False, &button);

    switch (button) {
      case UI_BUTTON_OK:
	resources_set_value(resname, (resource_value_t)filename);
        break;
      default:
        /* Do nothing special.  */
        break;
    }
}

static UI_CALLBACK(dump_keymap)
{
    PATH_VAR(wd);
    int path_max = GET_PATH_MAX;

    getcwd(wd, path_max);
    suspend_speed_eval();
    if (ui_input_string("VICE setting", "Write to Keymap File:",
			wd, path_max) != UI_BUTTON_OK)
	return;
    else if (kbd_dump_keymap(wd) < 0)
	ui_error(strerror(errno));
}

static ui_menu_entry_t keyboard_settings_submenu[] = {
    { "Keyboard mapping type",
      NULL, NULL, keyboard_maptype_submenu },
    { "--" },
    { "Set symbol keymap file", (ui_callback_t)select_user_keymap,
		(ui_callback_data_t)0, NULL},
    { "Set positional keymap file", (ui_callback_t)select_user_keymap,
		(ui_callback_data_t)1, NULL},
    { "--" },
    { "Dump keymap to file",
      (ui_callback_t) dump_keymap, NULL, NULL },
    { NULL }
};


/* ------------------------------------------------------------------------- */

/* True 1541 support items.  */

UI_MENU_DEFINE_TOGGLE(True1541)

UI_MENU_DEFINE_TOGGLE(True1541ParallelCable)

static UI_CALLBACK(set_custom_true1541_sync_factor)
{
    static char input_string[256];
    char msg_string[256];
    ui_button_t button;
    int sync_factor;

    resources_get_value("True1541SyncFactor",
                        (resource_value_t *) &sync_factor);
    if (!*input_string)
	sprintf(input_string, "%d", sync_factor);

    if (call_data) {
	if (sync_factor != TRUE1541_SYNC_PAL
            && sync_factor != TRUE1541_SYNC_NTSC)
	    ui_menu_set_tick(w, 1);
	else
	    ui_menu_set_tick(w, 0);
    } else {
	suspend_speed_eval();
	sprintf(msg_string, "Enter factor (PAL %d, NTSC %d)",
		TRUE1541_SYNC_PAL, TRUE1541_SYNC_NTSC);
	button = ui_input_string("1541 Sync Factor", msg_string, input_string,
				 256);
	if (button == UI_BUTTON_OK) {
	    int v;

	    v = atoi(input_string);
	    if (v != sync_factor) {
                resources_set_value("True1541SyncFactor",
                                    (resource_value_t) v);
		ui_update_menus();
	    }
	}
    }
}

UI_MENU_DEFINE_RADIO(True1541ExtendImagePolicy)

UI_MENU_DEFINE_RADIO(True1541SyncFactor)

UI_MENU_DEFINE_RADIO(True1541IdleMethod)

/* ------------------------------------------------------------------------- */

/* Serial settings.  */

UI_MENU_DEFINE_TOGGLE(NoTraps)
UI_MENU_DEFINE_TOGGLE(FileSystemDevice8)
UI_MENU_DEFINE_TOGGLE(FileSystemDevice9)
UI_MENU_DEFINE_TOGGLE(FileSystemDevice10)
UI_MENU_DEFINE_TOGGLE(FileSystemDevice11)
UI_MENU_DEFINE_TOGGLE(FSDevice8ConvertP00)
UI_MENU_DEFINE_TOGGLE(FSDevice9ConvertP00)
UI_MENU_DEFINE_TOGGLE(FSDevice10ConvertP00)
UI_MENU_DEFINE_TOGGLE(FSDevice11ConvertP00)
UI_MENU_DEFINE_TOGGLE(FSDevice8SaveP00)
UI_MENU_DEFINE_TOGGLE(FSDevice9SaveP00)
UI_MENU_DEFINE_TOGGLE(FSDevice10SaveP00)
UI_MENU_DEFINE_TOGGLE(FSDevice11SaveP00)

static UI_CALLBACK(set_fsdevice_directory)
{
    int unit = (int)client_data;
    char title[1024];
    ui_button_t button;

    suspend_speed_eval();
    sprintf(title, "Attach file system directory to device #%d", unit);

    /* FIXME: We need a real directory browser here.  */

#if 0
    {
        char *filename;

        filename = ui_select_file(title, read_disk_image_contents,
                                  unit == 8 ? True : False, &button);
        switch (button) {
          case UI_BUTTON_OK:
            fsdevice_set_directory(filename, unit);
            break;
          default:
            /* Do nothing special.  */
            break;
        }
    }
#else
    {
        char resname[256];
        char *value;
        char *new_value;
        int len;

        sprintf(resname, "FSDevice%dDir", unit);

        resources_get_value(resname, (resource_value_t *) &value);
        len = strlen(value) * 2;
        if (len < 255)
            len = 255;
        new_value = alloca(len + 1);
        strcpy(new_value, value);

        if (ui_input_string(title, "Path:", new_value, len) != UI_BUTTON_OK)
            return;

        resources_set_value(resname, (resource_value_t) new_value);
    }
#endif
}

/* ------------------------------------------------------------------------- */

/* Sound support. */

UI_MENU_DEFINE_TOGGLE(Sound)
UI_MENU_DEFINE_TOGGLE(SoundSpeedAdjustment)
UI_MENU_DEFINE_RADIO(SoundSampleRate)
UI_MENU_DEFINE_RADIO(SoundBufferSize)
UI_MENU_DEFINE_RADIO(SoundSuspendTime)
UI_MENU_DEFINE_TOGGLE(SidFilters)
UI_MENU_DEFINE_RADIO(SidModel)
UI_MENU_DEFINE_RADIO(SoundOversample)

/* ------------------------------------------------------------------------- */

static ui_menu_entry_t set_refresh_rate_submenu[] = {
    { "*Auto",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 0, NULL },
    { "*1/1",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 1, NULL },
    { "*1/2",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 2, NULL },
    { "*1/3",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 3, NULL },
    { "*1/4",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 4, NULL },
    { "*1/5",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 5, NULL },
    { "*1/6",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 6, NULL },
    { "*1/7",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 7, NULL },
    { "*1/8",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 8, NULL },
    { "*1/9",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 9, NULL },
    { "*1/10",
      (ui_callback_t) set_refresh_rate, (ui_callback_data_t) 10, NULL },
    { "--" },
    { "*Custom...",
      (ui_callback_t) set_custom_refresh_rate, NULL, NULL },
    { NULL }
};

static ui_menu_entry_t set_maximum_speed_submenu[] = {
    { "*100%",
      (ui_callback_t) set_maximum_speed, (ui_callback_data_t) 100, NULL },
    { "*50%",
      (ui_callback_t) set_maximum_speed, (ui_callback_data_t) 50, NULL },
    { "*20%",
      (ui_callback_t) set_maximum_speed, (ui_callback_data_t) 20, NULL },
    { "*10%",
      (ui_callback_t) set_maximum_speed, (ui_callback_data_t) 10, NULL },
    { "*No limit",
      (ui_callback_t) set_maximum_speed, (ui_callback_data_t) 0, NULL },
    { "--" },
    { "*Custom...",
      (ui_callback_t) set_custom_maximum_speed, NULL, NULL },
    { NULL }
};

static ui_menu_entry_t set_true1541_extend_image_policy_submenu[] = {
    { "*Never extend", (ui_callback_t) radio_True1541ExtendImagePolicy,
      (ui_callback_data_t) TRUE1541_EXTEND_NEVER, NULL },
    { "*Ask on extend", (ui_callback_t) radio_True1541ExtendImagePolicy,
      (ui_callback_data_t) TRUE1541_EXTEND_ASK, NULL },
    { "*Extend on access", (ui_callback_t) radio_True1541ExtendImagePolicy,
      (ui_callback_data_t) TRUE1541_EXTEND_ACCESS, NULL },
    { NULL }
};

static ui_menu_entry_t set_true1541_sync_factor_submenu[] = {
    { "*PAL", (ui_callback_t) radio_True1541SyncFactor,
      (ui_callback_data_t) TRUE1541_SYNC_PAL, NULL },
    { "*NTSC", (ui_callback_t) radio_True1541SyncFactor,
      (ui_callback_data_t) TRUE1541_SYNC_NTSC, NULL },
    { "*Custom...", (ui_callback_t) set_custom_true1541_sync_factor,
      NULL, NULL },
    { NULL }
};

static ui_menu_entry_t set_true1541_idle_method_submenu[] = {
    { "*Skip cycles", (ui_callback_t) radio_True1541IdleMethod,
      (ui_callback_data_t) TRUE1541_IDLE_SKIP_CYCLES, NULL },
    { "*Trap idle", (ui_callback_t) radio_True1541IdleMethod,
      (ui_callback_data_t) TRUE1541_IDLE_TRAP_IDLE, NULL },
    { NULL }
};

static ui_menu_entry_t set_sound_sample_rate_submenu[] = {
    { "*8000Hz", (ui_callback_t) radio_SoundSampleRate,
      (ui_callback_data_t) 8000, NULL },
    { "*11025Hz", (ui_callback_t) radio_SoundSampleRate,
      (ui_callback_data_t) 11025, NULL },
    { "*22050Hz", (ui_callback_t) radio_SoundSampleRate,
      (ui_callback_data_t) 22050, NULL },
    { "*44100Hz", (ui_callback_t) radio_SoundSampleRate,
      (ui_callback_data_t) 44100, NULL },
    { "*48000Hz", (ui_callback_t) radio_SoundSampleRate,
      (ui_callback_data_t) 48000, NULL },
    { NULL }
};

static ui_menu_entry_t set_sound_buffer_size_submenu[] = {
    { "*1.00 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 1000, NULL },
    { "*0.75 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 750, NULL },
    { "*0.50 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 500, NULL },
    { "*0.35 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 350, NULL },
    { "*0.30 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 300, NULL },
    { "*0.25 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 250, NULL },
    { "*0.20 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 200, NULL },
    { "*0.15 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 150, NULL },
    { "*0.10 sec", (ui_callback_t) radio_SoundBufferSize,
      (ui_callback_data_t) 100, NULL },
    { NULL }
};

static ui_menu_entry_t set_sound_suspend_time_submenu[] = {
    { "*Keep going", (ui_callback_t) radio_SoundSuspendTime,
      (ui_callback_data_t) 0, NULL },
    { "*1 sec suspend", (ui_callback_t) radio_SoundSuspendTime,
      (ui_callback_data_t) 1, NULL },
    { "*2 sec suspend", (ui_callback_t) radio_SoundSuspendTime,
      (ui_callback_data_t) 2, NULL },
    { "*5 sec suspend", (ui_callback_t) radio_SoundSuspendTime,
      (ui_callback_data_t) 5, NULL },
    { "*10 sec suspend", (ui_callback_t) radio_SoundSuspendTime,
      (ui_callback_data_t) 10, NULL },
    { NULL }
};

static ui_menu_entry_t set_sound_oversample_submenu [] = {
    { "*1x",
      (ui_callback_t) radio_SoundOversample, (ui_callback_data_t) 0, NULL },
    { "*2x",
      (ui_callback_t) radio_SoundOversample, (ui_callback_data_t) 1, NULL },
    { "*4x",
      (ui_callback_t) radio_SoundOversample, (ui_callback_data_t) 2, NULL },
    { "*8x",
      (ui_callback_t) radio_SoundOversample, (ui_callback_data_t) 3, NULL },
    { NULL }
};

static ui_menu_entry_t sound_settings_submenu[] = {
    { "*Enable sound playback",
      (ui_callback_t) toggle_Sound, NULL, NULL },
    { "*Enable adaptive playback",
      (ui_callback_t) toggle_SoundSpeedAdjustment, NULL, NULL },
    { "--" },
    { "*Sample rate",
      NULL, NULL, set_sound_sample_rate_submenu },
    { "*Buffer size",
      NULL, NULL, set_sound_buffer_size_submenu },
    { "*Suspend time",
      NULL, NULL, set_sound_suspend_time_submenu },
    { "*Oversample",
      NULL, NULL, set_sound_oversample_submenu },
    { NULL },
};

static ui_menu_entry_t set_file_system_device_submenu[] = {
    { "*Device #8", (ui_callback_t) toggle_FileSystemDevice8, NULL, NULL },
    { "*Device #9", (ui_callback_t) toggle_FileSystemDevice9, NULL, NULL },
    { "*Device #10", (ui_callback_t) toggle_FileSystemDevice10, NULL, NULL },
    { "*Device #11", (ui_callback_t) toggle_FileSystemDevice11, NULL, NULL },
    { NULL }
};

static ui_menu_entry_t set_fsdevice_directory_submenu[] = {
    { "Device #8...", (ui_callback_t) set_fsdevice_directory,
      (ui_callback_data_t) 8, NULL },
    { "Device #9...", (ui_callback_t) set_fsdevice_directory,
      (ui_callback_data_t) 9, NULL },
    { "Device #10...", (ui_callback_t) set_fsdevice_directory,
      (ui_callback_data_t) 10, NULL },
    { "Device #11...", (ui_callback_t) set_fsdevice_directory,
      (ui_callback_data_t) 11, NULL },
    { NULL }
};

static ui_menu_entry_t set_fsdevice_p00_convert_submenu[] = {
    { "*Device #8", (ui_callback_t) toggle_FSDevice8ConvertP00, NULL, NULL },
    { "*Device #9", (ui_callback_t) toggle_FSDevice9ConvertP00, NULL, NULL },
    { "*Device #10", (ui_callback_t) toggle_FSDevice10ConvertP00, NULL, NULL },
    { "*Device #11", (ui_callback_t) toggle_FSDevice11ConvertP00, NULL, NULL },
    { NULL }
};

static ui_menu_entry_t set_fsdevice_p00_save_submenu[] = {
    { "*Device #8", (ui_callback_t) toggle_FSDevice8SaveP00, NULL, NULL },
    { "*Device #9", (ui_callback_t) toggle_FSDevice9SaveP00, NULL, NULL },
    { "*Device #10", (ui_callback_t) toggle_FSDevice10SaveP00, NULL, NULL },
    { "*Device #11", (ui_callback_t) toggle_FSDevice11SaveP00, NULL, NULL },
    { NULL }
};

static ui_menu_entry_t serial_settings_submenu[] = {
    { "File system access", NULL, NULL,
      set_file_system_device_submenu },
    { "File system directories", NULL, NULL,
      set_fsdevice_directory_submenu },
    { "Convert P00 file names", NULL, NULL,
      set_fsdevice_p00_convert_submenu },
    { "Create P00 files on save", NULL, NULL,
      set_fsdevice_p00_save_submenu },
    { "--" },
    { "*Disable serial traps", (ui_callback_t) toggle_NoTraps, NULL, NULL },
    { NULL }
};

static ui_menu_entry_t true1541_settings_submenu[] = {
    { "*Enable true 1541 emulation",
      (ui_callback_t) toggle_True1541, NULL, NULL },
    { "*Enable parallel cable",
      (ui_callback_t) toggle_True1541ParallelCable, NULL, NULL },
    { "--" },
    { "True 1541 sync factor",
      NULL, NULL, set_true1541_sync_factor_submenu },
    { "True 1541 idle method",
      NULL, NULL, set_true1541_idle_method_submenu },
    { "--" },
    { "40-track image support",
      NULL, NULL, set_true1541_extend_image_policy_submenu },
    { NULL }
};

static ui_menu_entry_t video_settings_submenu[] = {
    { "*Video cache",
      (ui_callback_t) toggle_VideoCache, NULL, NULL },
    { "*Double size",
      (ui_callback_t) toggle_DoubleSize, NULL, NULL },
    { "*Double scan",
      (ui_callback_t) toggle_DoubleScan, NULL, NULL },
    { "*Use XSync()",
      (ui_callback_t) toggle_UseXSync, NULL, NULL },
    { NULL }
};

/* ------------------------------------------------------------------------- */

ui_menu_entry_t ui_performance_settings_menu[] = {
    { "Refresh rate",
      NULL, NULL, set_refresh_rate_submenu },
    { "Maximum speed",
      NULL, NULL, set_maximum_speed_submenu },
    { "*Enable warp mode",
      (ui_callback_t) toggle_WarpMode, NULL, NULL, XK_F9, UI_HOTMOD_META },
    { NULL }
};

ui_menu_entry_t ui_video_settings_menu[] = {
    { "Video settings",
      NULL, NULL, video_settings_submenu },
    { NULL }
};

ui_menu_entry_t ui_keyboard_settings_menu[] = {
    { "Keyboard settings",
      NULL, NULL, keyboard_settings_submenu },
    { NULL }
};

ui_menu_entry_t ui_sound_settings_menu[] = {
    { "Sound settings",
      NULL, NULL, sound_settings_submenu },
    { NULL }
};

ui_menu_entry_t ui_true1541_settings_menu[] = {
    { "1541 settings",
      NULL, NULL, true1541_settings_submenu },
    { NULL }
};

ui_menu_entry_t ui_serial_settings_menu[] = {
    { "Serial settings",
      NULL, NULL, serial_settings_submenu },
    { NULL }
};

ui_menu_entry_t ui_settings_settings_menu[] = {
    { "Save settings",
      (ui_callback_t) save_resources, NULL, NULL },
    { "Load settings",
      (ui_callback_t) load_resources, NULL, NULL },
    { "Restore default settings",
      (ui_callback_t) set_default_resources, NULL, NULL },
    { "*Save settings on exit",
      (ui_callback_t) toggle_SaveResourcesOnExit, NULL, NULL },
    { NULL }
};
