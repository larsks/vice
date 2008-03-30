/*
 * vsyncarch.c - End-of-frame handling for Vice/2
 *
 * Written by
 *  Thomas Bretz <tbretz@gsi.de>
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

#define INCL_DOSSEMAPHORES   /* Semaphore values */
#define INCL_DOSDATETIME     /* Timer support    */
#define INCL_DOSPROFILE
#define INCL_DOSPROCESS
#include <os2.h>

#include <stdio.h>
#include <stdlib.h>    // exit

#include "log.h"
#include "vsync.h"     // suspend_speed_eval
#include "sound.h"     // sound_close
#include "kbdbuf.h"    // kbd_buf_flush
#include "machine.h"   // machine_shutdown
#include "ui_status.h" // ui_display_speed
#include "dialogs.h"

#ifdef HAS_JOYSTICK
#include "joystick.h"
#endif

#include "vsyncarch.h"
// -------------------------------------------------------------------------

// 0 if Emulator is paused
static int emulator_paused=FALSE;

static ULONG ulTmrFreq = 0;  // Hertz (almost 1.2MHz at my PC) FIXME!!!

unsigned long vsyncarch_gettime()
{
    QWORD qwTmrTime;
    DosTmrQueryTime(&qwTmrTime);
    return qwTmrTime.ulLo;
}

static HEV hevTimer = 0; // Event semaphore handle

void vsyncarch_init()
{
    char szSemName[80];
    APIRET rc;

    sprintf(szSemName, "%s%i", "\\SEM32\\VICE2\\Vsync", vsyncarch_gettime());
    rc = DosCreateEventSem(szSemName,      // Name of semaphore to create
                           &hevTimer,     // Handle of semaphore returned
                           DC_SEM_SHARED,  // Shared semaphore
                           FALSE);         // Semaphore is in RESET state
    if (rc)
        log_debug("vsync.c: DosCreateEventSem (rc=%u) - cannot synchronize properly", rc);
}

unsigned long vsyncarch_timescale()
{
    static ULONG ulTmrFreq=0;

    if (!ulTmrFreq)
        DosTmrQueryFreq(&ulTmrFreq);

    return ulTmrFreq;
}

// -------------------------------------------------------------------------

// OS/2 functions to handle emulator paused
void emulator_pause()
{
    suspend_speed_eval();
    emulator_paused = TRUE;
}

void emulator_resume()
{
    emulator_paused=FALSE;
}

int isEmulatorPaused()
{
    return emulator_paused;
}

void vice_exit(void)
{
    APIRET rc;

    sound_close();
    machine_shutdown();
    //    video_free();
#ifdef HAS_JOYSTICK
    joystick_close();
#endif

    rc = DosCloseEventSem(hevTimer); // Get rid of semaphore
    if (rc)
        log_debug("vsync.c: DosCloseEventSem (rc=%u)", rc);

    exit(0);
}

// -------------------------------------------------------------------------

// Display speed (percentage) and frame rate (frames per second).
void vsyncarch_display_speed(double speed, double frame_rate)
{
    WinSendMsg(hwndEmulator, WM_DISPLAY,
               (void*)(int)(speed+0.5), (void*)(int)(frame_rate+0.5));
    // this line calles every 2 seconds makes sure that the system
    // is able to respond independently from the CPU load
    DosSleep(1);
}

void vsyncarch_sleep(long delay)
{
    // There are two ways to sleep for specific amount of milliseconds:
    // 1) like here
    // 2) with DosSleep(delay)
    // The difference is very easy:
    // 1) counts the system milliseconds
    // 2) counts the CPU time of the thread

    // APIRET rc;
    ULONG  ret;
    HTIMER htimer = 0; // Timer handle

    delay *= 1000.0/vsyncarch_timescale();

    if (delay<1)
        return;

    // Reset Semaphore before using it
    /*rc =*/ DosResetEventSem(hevTimer, &ret);
    // if (rc) log_debug("vsync.c: DosResetEventSem (rc=%u)", rc);

    // wait msec, after msec post hevTimer
    /*rc =*/ DosAsyncTimer(delay, (HSEM) hevTimer, &htimer);
    // if (rc) log_debug("vsync.c: DosAsyncTimer (rc=%u)", rc);

    // Wait for AsyncTimer event as long as it takes
    /*rc =*/ DosWaitEventSem(hevTimer, (ULONG) SEM_INDEFINITE_WAIT);
    // if (rc) log_debug("vsync.c: DosWaitEventSem (rc=%u)", rc);
}

int trigger_shutdown=0;

void vsyncarch_presync()
{
    if (trigger_shutdown)
        vice_exit();
}

void vsyncarch_postsync()
{
#ifdef HAS_JOYSTICK
    joystick_update();
#endif

    kbd_buf_flush();

    while (emulator_paused && !trigger_shutdown)
        DosSleep(1);
}
