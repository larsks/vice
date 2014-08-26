/*
 * plus4.c
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

#include "attach.h"
#include "autostart.h"
#include "cartridge.h"
#include "clkguard.h"
#include "datasette.h"
#include "debug.h"
#include "digiblaster.h"
#include "diskimage.h"
#include "drive-cmdline-options.h"
#include "drive-resources.h"
#include "drive-sound.h"
#include "drive.h"
#include "drivecpu.h"
#include "fliplist.h"
#include "fsdevice.h"
#include "gfxoutput.h"
#include "imagecontents.h"
#include "init.h"
#include "kbdbuf.h"
#include "keyboard.h"
#include "log.h"
#include "resources.h"
#include "machine-drive.h"
#include "machine-printer.h"
#include "machine-video.h"
#include "machine.h"
#include "maincpu.h"
#include "monitor.h"
#include "network.h"
#include "plus4-cmdline-options.h"
#include "plus4-resources.h"
#include "plus4-snapshot.h"
#include "plus4.h"
#include "plus4acia.h"
#include "plus4iec.h"
#include "plus4mem.h"
#include "plus4memcsory256k.h"
#include "plus4memhannes256k.h"
#include "plus4memrom.h"
#include "plus4speech.h"
#include "plus4tcbm.h"
#include "plus4ui.h"
#include "printer.h"
#include "rs232drv.h"
#include "screenshot.h"
#include "serial.h"
#include "sid.h"
#include "sidcart.h"
#include "sid-cmdline-options.h"
#include "sid-resources.h"
#include "sound.h"
#include "tape.h"
#include "ted-cmdline-options.h"
#include "ted-resources.h"
#include "ted-sound.h"
#include "ted.h"
#include "traps.h"
#include "types.h"
#include "vice-event.h"
#include "video.h"
#include "video-sound.h"
#include "vsync.h"

machine_context_t machine_context;

#define NUM_KEYBOARD_MAPPINGS 2

static char *machine_keymap_res_name_list[NUM_KEYBOARD_MAPPINGS] = {
    "KeymapSymFile", "KeymapPosFile"
};

char *machine_keymap_file_list[NUM_KEYBOARD_MAPPINGS] = {
    NULL, NULL
};

char *machine_get_keymap_res_name(int val)
{
    if (val < 0 || val > NUM_KEYBOARD_MAPPINGS) {
        return NULL;
    }
    return machine_keymap_res_name_list[val];
}

const char machine_name[] = "PLUS4";
int machine_class = VICE_MACHINE_PLUS4;

static void machine_vsync_hook(void);

/* ------------------------------------------------------------------------- */

static const trap_t plus4_serial_traps[] = {
    {
        "SerialListen",
        0xE16B,
        0xE1E7,
        { 0x20, 0xC6, 0xE2 },
        serial_trap_attention,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
    {
        "SerialSaListen",
        0xE177,
        0xE1E7,
        { 0x78, 0x20, 0xBF },
        serial_trap_attention,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
    {
        "SerialSendByte",
        0xE181,
        0xE1E7,
        { 0x78, 0x20, 0xC6 },
        serial_trap_send,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
/*
    {
        "SerialSendByte2",
        0xE158,
        0xE1E7,
        { 0x48, 0x24, 0x94 },
        serial_trap_send,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
*/
    {
        "SerialReceiveByte",
        0xE252,
        0xE1E7,
        { 0x78, 0xA9, 0x00 },
        serial_trap_receive,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
    {
        "SerialReady",
        0xE216,
        0xE1E7,
        { 0x24, 0x01, 0x70 },
        serial_trap_ready,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
    {
        "SerialReady2",
        0xE2D4,
        0xE1E7,
        { 0xA5, 0x01, 0xC5 },
        serial_trap_ready,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
    {
        NULL,
        0,
        0,
        { 0, 0, 0 },
        NULL,
        NULL,
        NULL
    }
};

/* Tape traps.  */
static const trap_t plus4_tape_traps[] = {
    {
        "TapeFindHeader",
        0xE9CC,
        0xE9CF,
        { 0x20, 0xD3, 0xE8 },
        tape_find_header_trap_plus4,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
    {
        "TapeReceive",
        0xE74B,
        0xE8C7,
        { 0xBA, 0x8E, 0xBE },
        tape_receive_trap_plus4,
        plus4memrom_trap_read,
        plus4memrom_trap_store
    },
    {
        NULL,
        0,
        0,
        { 0, 0, 0 },
        NULL,
        NULL,
        NULL
    }
};

static const tape_init_t tapeinit = {
    0x0333,
    0x90,
    0x93,
    0x0000,
    0,
    0xb4,
    0x9d,
    0x527,
    0xef,
    plus4_tape_traps,
    36 * 8,     /* 44 */
    66 * 8,
    70 * 8,     /* 88 */
    132 * 8,
    150 * 8,    /* 176 */
    264 * 8
};

static log_t plus4_log = LOG_ERR;
static machine_timing_t machine_timing;

/*
static long cycles_per_sec = PLUS4_PAL_CYCLES_PER_SEC;
static long cycles_per_rfsh = PLUS4_PAL_CYCLES_PER_RFSH;
static double rfsh_per_sec = PLUS4_PAL_RFSH_PER_SEC;
*/

/* Plus4-specific resource initialization.  This is called before initializing
   the machine itself with `machine_init()'.  */
int machine_resources_init(void)
{
    if (traps_resources_init() < 0) {
        init_resource_fail("traps");
        return -1;
    }
    if (plus4_resources_init() < 0) {
        init_resource_fail("plus4");
        return -1;
    }
    if (ted_resources_init() < 0) {
        init_resource_fail("ted");
        return -1;
    }
    if (cartridge_resources_init() < 0) {
        init_resource_fail("cartridge");
        return -1;
    }
    if (digiblaster_resources_init() < 0) {
        init_resource_fail("digiblaster");
        return -1;
    }
    if (speech_resources_init() < 0) {
        init_resource_fail("speech");
        return -1;
    }
    if (sidcart_resources_init() < 0) {
        init_resource_fail("sidcart");
        return -1;
    }
    if (acia_resources_init() < 0) {
        init_resource_fail("acia");
        return -1;
    }
    if (rs232drv_resources_init() < 0) {
        init_resource_fail("rs232drv");
        return -1;
    }
    if (serial_resources_init() < 0) {
        init_resource_fail("serial");
        return -1;
    }
    if (printer_resources_init() < 0) {
        init_resource_fail("printer");
        return -1;
    }
    if (joystick_resources_init() < 0) {
        init_resource_fail("joystick");
        return -1;
    }
    if (gfxoutput_resources_init() < 0) {
        init_resource_fail("gfxoutput");
        return -1;
    }
    if (fliplist_resources_init() < 0) {
        init_resource_fail("flip list");
        return -1;
    }
    if (file_system_resources_init() < 0) {
        init_resource_fail("file system");
        return -1;
    }
    /* Initialize file system device-specific resources.  */
    if (fsdevice_resources_init() < 0) {
        init_resource_fail("file system device");
        return -1;
    }
    if (disk_image_resources_init() < 0) {
        init_resource_fail("disk image");
        return -1;
    }
    if (event_resources_init() < 0) {
        init_resource_fail("event");
        return -1;
    }
    if (kbdbuf_resources_init() < 0) {
        init_resource_fail("Keyboard");
        return -1;
    }
    if (autostart_resources_init() < 0) {
        init_resource_fail("autostart");
        return -1;
    }
#ifdef HAVE_NETWORK
    if (network_resources_init() < 0) {
        init_resource_fail("network");
        return -1;
    }
#endif
#ifdef DEBUG
    if (debug_resources_init() < 0) {
        init_resource_fail("debug");
        return -1;
    }
#endif
#ifndef COMMON_KBD
    if (kbd_resources_init() < 0) {
        init_resource_fail("kbd");
        return -1;
    }
#endif
    if (drive_resources_init() < 0) {
        init_resource_fail("drive");
        return -1;
    }
    if (datasette_resources_init() < 0) {
        init_resource_fail("datasette");
        return -1;
    }
    return 0;
}

void machine_resources_shutdown(void)
{
    cartridge_resources_shutdown();
    speech_resources_shutdown();
    serial_shutdown();
    plus4_resources_shutdown();
    rs232drv_resources_shutdown();
    printer_resources_shutdown();
    drive_resources_shutdown();
    fsdevice_resources_shutdown();
    disk_image_resources_shutdown();
}

/* Plus4-specific command-line option initialization.  */
int machine_cmdline_options_init(void)
{
    if (traps_cmdline_options_init() < 0) {
        init_cmdline_options_fail("traps");
        return -1;
    }
    if (plus4_cmdline_options_init() < 0) {
        init_cmdline_options_fail("plus4");
        return -1;
    }
    if (ted_cmdline_options_init() < 0) {
        init_cmdline_options_fail("ted");
        return -1;
    }
    if (cartridge_cmdline_options_init() < 0) {
        init_cmdline_options_fail("cartridge");
        return -1;
    }
    if (digiblaster_cmdline_options_init() < 0) {
        init_cmdline_options_fail("digiblaster");
        return -1;
    }
    if (sidcart_cmdline_options_init() < 0) {
        init_cmdline_options_fail("sidcart");
        return -1;
    }
    if (speech_cmdline_options_init() < 0) {
        init_cmdline_options_fail("speech");
        return -1;
    }
    if (acia_cmdline_options_init() < 0) {
        init_cmdline_options_fail("acia");
        return -1;
    }
    if (rs232drv_cmdline_options_init() < 0) {
        init_cmdline_options_fail("rs232drv");
        return -1;
    }
    if (serial_cmdline_options_init() < 0) {
        init_cmdline_options_fail("serial");
        return -1;
    }
    if (printer_cmdline_options_init() < 0) {
        init_cmdline_options_fail("printer");
        return -1;
    }
    if (joystick_cmdline_options_init() < 0) {
        init_cmdline_options_fail("joystick");
        return -1;
    }
    if (gfxoutput_cmdline_options_init() < 0) {
        init_cmdline_options_fail("gfxoutput");
        return -1;
    }
    if (fliplist_cmdline_options_init() < 0) {
        init_cmdline_options_fail("flip list");
        return -1;
    }
    if (file_system_cmdline_options_init() < 0) {
        init_cmdline_options_fail("attach");
        return -1;
    }
    if (fsdevice_cmdline_options_init() < 0) {
        init_cmdline_options_fail("file system");
        return -1;
    }
    if (disk_image_cmdline_options_init() < 0) {
        init_cmdline_options_fail("disk image");
        return -1;
    }
    if (event_cmdline_options_init() < 0) {
        init_cmdline_options_fail("event");
        return -1;
    }
    if (kbdbuf_cmdline_options_init() < 0) {
        init_cmdline_options_fail("keyboard");
        return -1;
    }
    if (autostart_cmdline_options_init() < 0) {
        init_cmdline_options_fail("autostart");
        return -1;
    }
#ifdef DEBUG
    if (debug_cmdline_options_init() < 0) {
        init_cmdline_options_fail("debug");
        return -1;
    }
#endif
#ifndef COMMON_KBD
    if (kbd_cmdline_options_init() < 0) {
        init_cmdline_options_fail("kbd");
        return -1;
    }
#endif
    if (drive_cmdline_options_init() < 0) {
        init_cmdline_options_fail("drive");
        return -1;
    }
    if (datasette_cmdline_options_init() < 0) {
        init_cmdline_options_fail("datasette");
        return -1;
    }
    return 0;
}

static void plus4_monitor_init(void)
{
    unsigned int dnr;
    monitor_cpu_type_t asm6502, asmR65C02;
    monitor_interface_t *drive_interface_init[DRIVE_NUM];
    monitor_cpu_type_t *asmarray[3];

    asmarray[0] = &asm6502;
    asmarray[1] = &asmR65C02;
    asmarray[2] = NULL;

    asm6502_init(&asm6502);
    asmR65C02_init(&asmR65C02);

    for (dnr = 0; dnr < DRIVE_NUM; dnr++) {
        drive_interface_init[dnr] = drivecpu_monitor_interface_get(dnr);
    }

    /* Initialize the monitor.  */
    monitor_init(maincpu_monitor_interface_get(), drive_interface_init,
                 asmarray);
}

void machine_setup_context(void)
{
    speech_setup_context(&machine_context);
    machine_printer_setup_context(&machine_context);
}

/* Plus4-specific initialization.  */
int machine_specific_init(void)
{
    int delay;

    plus4_log = log_open("Plus4");

    if (mem_load() < 0) {
        return -1;
    }

    event_init();

    /* Setup trap handling.  */
    traps_init();

    if (!video_disabled_mode) {
        joystick_init();
    }

    gfxoutput_init();

    /* Initialize serial traps.  */
    if (serial_init(plus4_serial_traps) < 0) {
        return -1;
    }

    serial_trap_init(0xa8);
    serial_iec_bus_init();

    rs232drv_init();

    /* Initialize print devices.  */
    printer_init();

    /* Initialize the tape emulation.  */
    tape_init(&tapeinit);

    /* Initialize the datasette emulation.  */
    datasette_init();

    /* Fire up the hardware-level drive emulation.  */
    drive_init();

    disk_image_init();

    /* Initialize autostart.  */
    resources_get_int("AutostartDelay", &delay);
    if (delay == 0) {
        delay = 2; /* default */
    }
    autostart_init((CLOCK)(delay * PLUS4_PAL_RFSH_PER_SEC * PLUS4_PAL_CYCLES_PER_RFSH), 0, 0, 0xc8, 0xca, -40);

    /* Initialize the sidcart first */
    sidcart_sound_chip_init();

    /* Initialize native sound chip */
    ted_sound_chip_init();

    /* Initialize cartridge based sound chips */
    digiblaster_sound_chip_init();
    speech_sound_chip_init();

    drive_sound_init();
    video_sound_init();

    /* Initialize sound.  Notice that this does not really open the audio
       device yet.  */
    sound_init(machine_timing.cycles_per_sec, machine_timing.cycles_per_rfsh);

    if (ted_init() == NULL) {
        return -1;
    }

    acia_init();

#ifndef COMMON_KBD
    if (plus4_kbd_init() < 0) {
        return -1;
    }
#endif

    plus4_monitor_init();

    /* Initialize vsync and register our hook function.  */
    vsync_init(machine_vsync_hook);
    vsync_set_machine_parameter(machine_timing.rfsh_per_sec,
                                machine_timing.cycles_per_sec);

    /* Initialize keyboard buffer.  */
    kbdbuf_init(1319, 239, 8, (CLOCK)(machine_timing.rfsh_per_sec * machine_timing.cycles_per_rfsh));

    plus4ui_init();

    cs256k_init();

    h256k_init();

    plus4iec_init();

    machine_drive_stub();

#if defined (USE_XF86_EXTENSIONS) && \
    (defined(USE_XF86_VIDMODE_EXT) || defined (HAVE_XRANDR))
    {
        /* set fullscreen if user used `-fullscreen' on cmdline */
        int fs;
        resources_get_int("UseFullscreen", &fs);
        if (fs) {
            resources_set_int("TEDFullscreen", 1);
        }
    }
#endif
    return 0;
}

/* PLUS4-specific reset sequence.  */
void machine_specific_reset(void)
{
    serial_traps_reset();

    acia_reset();
    rs232drv_reset();

    printer_reset();

    plus4tcbm1_reset();
    plus4tcbm2_reset();

    ted_reset();

    sid_reset();

    cs256k_reset();
    h256k_reset();

    drive_reset();
    datasette_reset();
}

void machine_specific_powerup(void)
{
    ted_reset_registers();
}

void machine_specific_shutdown(void)
{
    tape_image_detach_internal(1);

    ted_shutdown();
    speech_shutdown();

    cs256k_shutdown();
    h256k_shutdown();

    plus4ui_shutdown();
}

void machine_handle_pending_alarms(int num_write_cycles)
{
    ted_handle_pending_alarms(num_write_cycles);
}

/* ------------------------------------------------------------------------- */

/* This hook is called at the end of every frame.  */
static void machine_vsync_hook(void)
{
    CLOCK sub;

    drive_vsync_hook();

    autostart_advance();

    screenshot_record();

    sub = clk_guard_prevent_overflow(maincpu_clk_guard);

    /* The drive has to deal both with our overflowing and its own one, so
       it is called even when there is no overflowing in the main CPU.  */
    drivecpu_prevent_clk_overflow_all(sub);
}

void machine_set_restore_key(int v)
{
}

int machine_has_restore_key(void)
{
    return 0;
}

/* ------------------------------------------------------------------------- */

long machine_get_cycles_per_second(void)
{
    return machine_timing.cycles_per_sec;
}

long machine_get_cycles_per_frame(void)
{
    return machine_timing.cycles_per_rfsh;
}

void machine_get_line_cycle(unsigned int *line, unsigned int *cycle, int *half_cycle)
{
    *line = (unsigned int)((maincpu_clk) / machine_timing.cycles_per_line % machine_timing.screen_lines);

    *cycle = (unsigned int)((maincpu_clk) % machine_timing.cycles_per_line);

    *half_cycle = (int)-1;
}

void machine_change_timing(int timeval)
{
    int border_mode;

    switch (timeval) {
        default:
        case MACHINE_SYNC_PAL ^ TED_BORDER_MODE(TED_NORMAL_BORDERS):
        case MACHINE_SYNC_NTSC ^ TED_BORDER_MODE(TED_NORMAL_BORDERS):
            timeval ^= TED_BORDER_MODE(TED_NORMAL_BORDERS);
            border_mode = TED_NORMAL_BORDERS;
            break;
        case MACHINE_SYNC_PAL ^ TED_BORDER_MODE(TED_FULL_BORDERS):
        case MACHINE_SYNC_NTSC ^ TED_BORDER_MODE(TED_FULL_BORDERS):
            timeval ^= TED_BORDER_MODE(TED_FULL_BORDERS);
            border_mode = TED_FULL_BORDERS;
            break;
        case MACHINE_SYNC_PAL ^ TED_BORDER_MODE(TED_DEBUG_BORDERS):
        case MACHINE_SYNC_NTSC ^ TED_BORDER_MODE(TED_DEBUG_BORDERS):
            timeval ^= TED_BORDER_MODE(TED_DEBUG_BORDERS);
            border_mode = TED_DEBUG_BORDERS;
            break;
        case MACHINE_SYNC_PAL ^ TED_BORDER_MODE(TED_NO_BORDERS):
        case MACHINE_SYNC_NTSC ^ TED_BORDER_MODE(TED_NO_BORDERS):
            timeval ^= TED_BORDER_MODE(TED_NO_BORDERS);
            border_mode = TED_NO_BORDERS;
            break;
    }

    switch (timeval) {
        case MACHINE_SYNC_PAL:
            machine_timing.cycles_per_sec = PLUS4_PAL_CYCLES_PER_SEC;
            machine_timing.cycles_per_rfsh = PLUS4_PAL_CYCLES_PER_RFSH;
            machine_timing.rfsh_per_sec = PLUS4_PAL_RFSH_PER_SEC;
            machine_timing.cycles_per_line = PLUS4_PAL_CYCLES_PER_LINE;
            machine_timing.screen_lines = PLUS4_PAL_SCREEN_LINES;
            machine_timing.power_freq = 50;
            break;
        case MACHINE_SYNC_NTSC:
            machine_timing.cycles_per_sec = PLUS4_NTSC_CYCLES_PER_SEC;
            machine_timing.cycles_per_rfsh = PLUS4_NTSC_CYCLES_PER_RFSH;
            machine_timing.rfsh_per_sec = PLUS4_NTSC_RFSH_PER_SEC;
            machine_timing.cycles_per_line = PLUS4_NTSC_CYCLES_PER_LINE;
            machine_timing.screen_lines = PLUS4_NTSC_SCREEN_LINES;
            machine_timing.power_freq = 60;
            break;
        default:
            log_error(plus4_log, "Unknown machine timing.");
    }

    vsync_set_machine_parameter(machine_timing.rfsh_per_sec,
                                machine_timing.cycles_per_sec);
    sound_set_machine_parameter(machine_timing.cycles_per_sec,
                                machine_timing.cycles_per_rfsh);
    debug_set_machine_parameter(machine_timing.cycles_per_line,
                                machine_timing.screen_lines);
    drive_set_machine_parameter(machine_timing.cycles_per_sec);
    serial_iec_device_set_machine_parameter(machine_timing.cycles_per_sec);
    clk_guard_set_clk_base(maincpu_clk_guard, machine_timing.cycles_per_rfsh);

    ted_change_timing(&machine_timing, border_mode);

    machine_trigger_reset(MACHINE_RESET_MODE_HARD);
}

/* ------------------------------------------------------------------------- */

int machine_write_snapshot(const char *name, int save_roms, int save_disks,
                           int event_mode)
{
    return plus4_snapshot_write(name, save_roms, save_disks, event_mode);
}

int machine_read_snapshot(const char *name, int event_mode)
{
    return plus4_snapshot_read(name, event_mode);
}

/* ------------------------------------------------------------------------- */

int machine_autodetect_psid(const char *name)
{
    return -1;
}

int machine_screenshot(screenshot_t *screenshot, struct video_canvas_s *canvas)
{
    if (canvas != ted_get_canvas()) {
        return -1;
    }

    ted_screenshot(screenshot);

    return 0;
}

int machine_canvas_async_refresh(struct canvas_refresh_s *refresh,
                                 struct video_canvas_s *canvas)
{
    if (canvas != ted_get_canvas()) {
        return -1;
    }

    ted_async_refresh(refresh);

    return 0;
}

int machine_num_keyboard_mappings(void)
{
    return NUM_KEYBOARD_MAPPINGS;
}

struct image_contents_s *machine_diskcontents_bus_read(unsigned int unit)
{
    return diskcontents_iec_read(unit);
}

BYTE machine_tape_type_default(void)
{
    return TAPE_CAS_TYPE_BAS;
}

int machine_addr_in_ram(unsigned int addr)
{
    /* FIXME are these correct? */
    return (addr < 0xe000 && !(addr >= 0xa000 && addr < 0xc000)) ? 1 : 0;
}

const char *machine_get_name(void)
{
    return machine_name;
}
