/*
 * sid-snapshot.c - SID snapshot.
 *
 * Written by
 *  Teemu Rantanen <tvr@cs.hut.fi>
 *  Ettore Perazzoli <ettore@comm2000.it>
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
#include <string.h>

#include "fastsid.h"
#include "log.h"
#include "resources.h"
#include "screenshot.h"
#include "sid-snapshot.h"
#include "sid.h"
#include "sound.h"
#include "snapshot.h"
#include "types.h"

/* TODO:
   - Add snapshot support for cw3
   - Add snapshot support for hardsid
   - Add snapshot support for parsid
 */

/* Take care of possible failures to set the sid engine and fall back to fastsid */
static void set_sid_engine_with_fallback(int engine)
{
    if (engine != SID_ENGINE_FASTSID) {
        if (resources_set_int("SidEngine", engine) < 0) {
            resources_set_int("SidEngine", SID_ENGINE_FASTSID);
        }
    } else {
        resources_set_int("SidEngine", SID_ENGINE_FASTSID);
    }
}

static int intended_sid_engine = -1;

/* ---------------------------------------------------------------------*/

/* SID snapshot module format:

   type  | name     | version | description
   ----------------------------------------
   BYTE  | sids     |   1.2+  | amount of extra sids
   BYTE  | sound    |   1.2+  | sound active flag
   BYTE  | engine   |   1.2+  | sound engine
   ARRAY | sid data |   1.1+  | 32 BYTES of SID registers
 */

/* SID2 snapshot module format:

   type  | name     | version | description
   ----------------------------------------
   WORD  | address  |   1.2+  | SID address
   ARRAY | sid data |   1.2+  | 32 BYTES of SID registers
 */

/* SID3 snapshot module format:

   type  | name     | version | description
   ----------------------------------------
   WORD  | address  |   1.2+  | SID address
   ARRAY | sid data |   1.2+  | 32 BYTES of SID registers
 */

static const char snap_module_name_simple1[] = "SID";
static const char snap_module_name_simple2[] = "SID2";
static const char snap_module_name_simple3[] = "SID3";

#define SNAP_MAJOR_SIMPLE 1
#define SNAP_MINOR_SIMPLE 3

static int sid_snapshot_write_module_simple(snapshot_t *s, int sidnr)
{
    int sound, sid_engine, sids;
    snapshot_module_t *m;
    const char *snap_module_name_simple = NULL;
    int sid_address;

    switch (sidnr) {
        default:
        case 0:
            snap_module_name_simple = snap_module_name_simple1;
            break;
        case 1:
            snap_module_name_simple = snap_module_name_simple2;
            break;
        case 2:
            snap_module_name_simple = snap_module_name_simple3;
            break;
    }

    m = snapshot_module_create(s, snap_module_name_simple, SNAP_MAJOR_SIMPLE, SNAP_MINOR_SIMPLE);

    if (m == NULL) {
        return -1;
    }

    resources_get_int("Sound", &sound);
    resources_get_int("SidEngine", &sid_engine);
    resources_get_int("SidStereo", &sids);

    /* Added in 1.2, for the 1st SID module the amount of SIDs is saved 1st */
    if (!sidnr) {
        if (SMW_B(m, (BYTE)sids) < 0) {
            goto fail;
        }
    }

    /* Added in 1.2, for the 2nd SID module the address is saved */
    if (sidnr == 1) {
        resources_get_int("SidStereoAddressStart", &sid_address);
        if (SMW_W(m, (WORD)sid_address) < 0) {
            goto fail;
        }
    }

    /* Added in 1.2, for the 3rd SID module the address is saved */
    if (sidnr == 2) {
        resources_get_int("SidTripleAddressStart", &sid_address);
        if (SMW_W(m, (WORD)sid_address) < 0) {
            goto fail;
        }
    }

    /* Changed in 1.2, all data is saved whether sound is on or off */

    /* Changed in 1.3, sound and sid_engine are only saved in the 1st SID module */
    if (!sidnr) {
        if (0
            || SMW_B(m, (BYTE)sound) < 0
            || SMW_B(m, (BYTE)sid_engine) < 0) {
            goto fail;
        }
	}

    if (SMW_BA(m, sid_get_siddata(sidnr), 32) < 0) {
        goto fail;
    }

    return snapshot_module_close(m);

fail:
    snapshot_module_close(m);
    return -1;
}

static int sid_snapshot_read_module_simple(snapshot_t *s, int sidnr)
{
    BYTE major_version, minor_version;
    snapshot_module_t *m;
    BYTE tmp[34];
    const char *snap_module_name_simple = NULL;
    int sids = 0;
    int sid_address;

    switch (sidnr) {
        default:
        case 0:
            snap_module_name_simple = snap_module_name_simple1;
            break;
        case 1:
            snap_module_name_simple = snap_module_name_simple2;
            break;
        case 2:
            snap_module_name_simple = snap_module_name_simple3;
            break;
    }

    m = snapshot_module_open(s, snap_module_name_simple, &major_version, &minor_version);

    if (m == NULL) {
        return -1;
    }

    /* Do not accept versions higher than current */
    if (major_version > SNAP_MAJOR_SIMPLE || minor_version > SNAP_MINOR_SIMPLE) {
        snapshot_set_error(SNAPSHOT_MODULE_HIGHER_VERSION);
        goto fail;
    }

    /* Handle 1.3 snapshots differently */
    if (SNAPVAL(major_version, minor_version, 1, 3)) {
        if (!sidnr) {
            if (SMR_B_INT(m, &sids) < 0) {
                goto fail;
            }
            resources_set_int("SidStereo", sids);
            if (0
                || SMR_B(m, &tmp[0]) < 0
                || SMR_B(m, &tmp[1]) < 0) {
                goto fail;
            }
            screenshot_prepare_reopen();
            sound_close();
            screenshot_try_reopen();
            resources_set_int("Sound", (int)tmp[0]);

            intended_sid_engine = tmp[1];
            set_sid_engine_with_fallback(tmp[1]);
        } else {
            if (SMR_W_INT(m, &sid_address) < 0) {
                goto fail;
            }
        }
        if (sidnr == 1) {
            resources_set_int("SidStereoAddressStart", sid_address);
        }
        if (sidnr == 2) {
            resources_set_int("SidTripleAddressStart", sid_address);
        }
        if (SMR_BA(m, tmp + 2, 32) < 0) {
            goto fail;
        }
        memcpy(sid_get_siddata(sidnr), &tmp[2], 32);
        sound_open();
        return snapshot_module_close(m);
    }

    /* Handle 1.2 snapshots differently */
    if (SNAPVAL(major_version, minor_version, 1, 2)) {
        if (!sidnr) {
            if (SMR_B_INT(m, &sids) < 0) {
                goto fail;
            }
            resources_set_int("SidStereo", sids);
        } else {
            if (SMR_W_INT(m, &sid_address) < 0) {
                goto fail;
            }
        }
        if (sidnr == 1) {
            resources_set_int("SidStereoAddressStart", sid_address);
        }
        if (sidnr == 2) {
            resources_set_int("SidTripleAddressStart", sid_address);
        }
        if (0
            || SMR_B(m, &tmp[0]) < 0
            || SMR_B(m, &tmp[1]) < 0
            || SMR_BA(m, tmp + 2, 32) < 0) {
            goto fail;
        }
        screenshot_prepare_reopen();
        sound_close();
        screenshot_try_reopen();
        resources_set_int("Sound", (int)tmp[0]);

        intended_sid_engine = tmp[1];
        set_sid_engine_with_fallback(tmp[1]);

        memcpy(sid_get_siddata(sidnr), &tmp[2], 32);
        sound_open();
        return snapshot_module_close(m);
    }

    /* If more than 32 bytes are present then the resource "Sound" and
       "SidEngine" come first! If there is only one byte present, then
       sound is disabled. */
    if (SMR_BA(m, tmp, 34) < 0) {
        if (SMR_BA(m, tmp, 32) < 0) {
            if (SMR_BA(m, tmp, 1) < 0) {
                snapshot_module_close(m);
                goto fail;
            } else {
                sound_close();
            }
        } else {
            memcpy(sid_get_siddata(0), &tmp[0], 32);
        }
    } else {
        int res_sound = (int)(tmp[0]);
        int res_engine = (int)(tmp[1]);

        screenshot_prepare_reopen();
        sound_close();
        screenshot_try_reopen();
        resources_set_int("Sound", res_sound);
        if (res_sound) {
            intended_sid_engine = res_engine;
            set_sid_engine_with_fallback(res_engine);
            memcpy(sid_get_siddata(0), &tmp[2], 32);
            sound_open();
        }
    }

    return snapshot_module_close(m);

fail:
    snapshot_module_close(m);
    return -1;
}

/* ---------------------------------------------------------------------*/

static int sid_snapshot_write_fastsid_module(snapshot_module_t *m, int sidnr)
{
    sid_fastsid_snapshot_state_t sid_state;

    fastsid_state_read(sound_get_psid(sidnr), &sid_state);

    if (0
        || SMW_DW(m, sid_state.factor) < 0
        || SMW_BA(m, sid_state.d, 32) < 0
        || SMW_B(m, sid_state.has3) < 0
        || SMW_B(m, sid_state.vol) < 0
        || SMW_DWA(m, (DWORD *)sid_state.adrs, 16) < 0
        || SMW_DWA(m, sid_state.sz, 16) < 0
        || SMW_DW(m, sid_state.speed1) < 0
        || SMW_B(m, sid_state.update) < 0
        || SMW_B(m, sid_state.newsid) < 0
        || SMW_B(m, sid_state.laststore) < 0
        || SMW_B(m, sid_state.laststorebit) < 0
        || SMW_DW(m, sid_state.laststoreclk) < 0
        || SMW_DW(m, sid_state.emulatefilter) < 0
        || SMW_DB(m, (double)sid_state.filterDy) < 0
        || SMW_DB(m, (double)sid_state.filterResDy) < 0
        || SMW_B(m, sid_state.filterType) < 0
        || SMW_B(m, sid_state.filterCurType) < 0
        || SMW_W(m, sid_state.filterValue) < 0
        || SMW_DWA(m, sid_state.v_nr, 3) < 0
        || SMW_DWA(m, sid_state.v_f, 3) < 0
        || SMW_DWA(m, sid_state.v_fs, 3) < 0
        || SMW_BA(m, sid_state.v_noise, 3) < 0
        || SMW_DWA(m, sid_state.v_adsr, 3) < 0
        || SMW_DWA(m, (DWORD *)sid_state.v_adsrs, 3) < 0
        || SMW_DWA(m, sid_state.v_adsrz, 3) < 0
        || SMW_BA(m, sid_state.v_sync, 3) < 0
        || SMW_BA(m, sid_state.v_filter, 3) < 0
        || SMW_BA(m, sid_state.v_update, 3) < 0
        || SMW_BA(m, sid_state.v_gateflip, 3) < 0
        || SMW_BA(m, sid_state.v_adsrm, 3) < 0
        || SMW_BA(m, sid_state.v_attack, 3) < 0
        || SMW_BA(m, sid_state.v_decay, 3) < 0
        || SMW_BA(m, sid_state.v_sustain, 3) < 0
        || SMW_BA(m, sid_state.v_release, 3) < 0
        || SMW_DWA(m, sid_state.v_rv, 3) < 0
        || SMW_BA(m, sid_state.v_wt, 3) < 0
        || SMW_WA(m, sid_state.v_wt_offset, 3) < 0
        || SMW_DWA(m, sid_state.v_wtpf, 3) < 0
        || SMW_DWA(m, sid_state.v_wtl, 3) < 0
        || SMW_W(m, sid_state.v_wtr[0][0]) < 0
        || SMW_W(m, sid_state.v_wtr[0][1]) < 0
        || SMW_W(m, sid_state.v_wtr[0][2]) < 0
        || SMW_W(m, sid_state.v_wtr[1][0]) < 0
        || SMW_W(m, sid_state.v_wtr[1][1]) < 0
        || SMW_W(m, sid_state.v_wtr[1][2]) < 0
        || SMW_BA(m, sid_state.v_filtIO, 3) < 0
        || SMW_DB(m, sid_state.v_filtLow[0]) < 0
        || SMW_DB(m, sid_state.v_filtLow[1]) < 0
        || SMW_DB(m, sid_state.v_filtLow[2]) < 0
        || SMW_DB(m, sid_state.v_filtRef[0]) < 0
        || SMW_DB(m, sid_state.v_filtRef[1]) < 0
        || SMW_DB(m, sid_state.v_filtRef[2]) < 0) {
        return -1;
    }
    return 0;
}

static int sid_snapshot_read_fastsid_module(snapshot_module_t *m, int sidnr)
{
    int i;
    DWORD dwtmp;
    double dbltmp;

    sid_fastsid_snapshot_state_t sid_state;

    if (0
        || SMR_DW(m, &sid_state.factor) < 0
        || SMR_BA(m, sid_state.d, 32) < 0
        || SMR_B(m, &sid_state.has3) < 0
        || SMR_B(m, &sid_state.vol) < 0) {
        return -1;
    }

    for (i = 0; i < 16; ++i) {
        if (SMR_DW(m, &dwtmp) < 0) {
            return -1;
        }
        sid_state.adrs[i] = (SDWORD)dwtmp;
    }

    if (0
        || SMR_DWA(m, sid_state.sz, 16) < 0
        || SMR_DW(m, &sid_state.speed1) < 0
        || SMR_B(m, &sid_state.update) < 0
        || SMR_B(m, &sid_state.newsid) < 0
        || SMR_B(m, &sid_state.laststore) < 0
        || SMR_B(m, &sid_state.laststorebit) < 0
        || SMR_DW(m, &sid_state.laststoreclk) < 0
        || SMR_DW(m, &sid_state.emulatefilter) < 0) {
        return -1;
    }

    if (SMR_DB(m, &dbltmp) < 0) {
        return -1;
    }
    sid_state.filterDy = (float)dbltmp;

    if (SMR_DB(m, &dbltmp) < 0) {
        return -1;
    }
    sid_state.filterResDy = (float)dbltmp;

    if (0
        || SMR_B(m, &sid_state.filterType) < 0
        || SMR_B(m, &sid_state.filterCurType) < 0
        || SMR_W(m, &sid_state.filterValue) < 0
        || SMR_DWA(m, sid_state.v_nr, 3) < 0
        || SMR_DWA(m, sid_state.v_f, 3) < 0
        || SMR_DWA(m, sid_state.v_fs, 3) < 0
        || SMR_BA(m, sid_state.v_noise, 3) < 0
        || SMR_DWA(m, sid_state.v_adsr, 3) < 0) {
        return -1;
    }

    for (i = 0; i < 3; ++i) {
        if (SMR_DW(m, &dwtmp) < 0) {
            return -1;
        }
        sid_state.v_adsrs[i] = (SDWORD)dwtmp;
    }

    if (0
        || SMR_DWA(m, sid_state.v_adsrz, 3) < 0
        || SMR_BA(m, sid_state.v_sync, 3) < 0
        || SMR_BA(m, sid_state.v_filter, 3) < 0
        || SMR_BA(m, sid_state.v_update, 3) < 0
        || SMR_BA(m, sid_state.v_gateflip, 3) < 0
        || SMR_BA(m, sid_state.v_adsrm, 3) < 0
        || SMR_BA(m, sid_state.v_attack, 3) < 0
        || SMR_BA(m, sid_state.v_decay, 3) < 0
        || SMR_BA(m, sid_state.v_sustain, 3) < 0
        || SMR_BA(m, sid_state.v_release, 3) < 0
        || SMR_DWA(m, sid_state.v_rv, 3) < 0
        || SMR_BA(m, sid_state.v_wt, 3) < 0
        || SMR_WA(m, sid_state.v_wt_offset, 3) < 0
        || SMR_DWA(m, sid_state.v_wtpf, 3) < 0
        || SMR_DWA(m, sid_state.v_wtl, 3) < 0
        || SMR_W(m, &sid_state.v_wtr[0][0]) < 0
        || SMR_W(m, &sid_state.v_wtr[0][1]) < 0
        || SMR_W(m, &sid_state.v_wtr[0][2]) < 0
        || SMR_W(m, &sid_state.v_wtr[1][0]) < 0
        || SMR_W(m, &sid_state.v_wtr[1][1]) < 0
        || SMR_W(m, &sid_state.v_wtr[1][2]) < 0
        || SMR_BA(m, sid_state.v_filtIO, 3) < 0) {
		return -1;
    }

    for (i = 0; i < 3; ++i) {
        if (SMR_DB(m, &dbltmp) < 0) {
            return -1;
        }
        sid_state.v_filtLow[i] = (float)dbltmp;
    }

    for (i = 0; i < 3; ++i) {
        if (SMR_DB(m, &dbltmp) < 0) {
            return -1;
        }
        sid_state.v_filtRef[i] = (float)dbltmp;
    }

    fastsid_state_write(sound_get_psid(sidnr), &sid_state);

    return 0;
}

/* ---------------------------------------------------------------------*/

#ifdef HAVE_RESID
static int sid_snapshot_write_resid_module(snapshot_module_t *m, int sidnr)
{
    sid_snapshot_state_t sid_state;

    sid_state_read(sidnr, &sid_state);

    if (0
        || SMW_BA(m, sid_state.sid_register, 32) < 0
        || SMW_B(m, sid_state.bus_value) < 0
        || SMW_DW(m, sid_state.bus_value_ttl) < 0
        || SMW_DWA(m, sid_state.accumulator, 3) < 0
        || SMW_DWA(m, sid_state.shift_register, 3) < 0
        || SMW_WA(m, sid_state.rate_counter, 3) < 0
        || SMW_WA(m, sid_state.exponential_counter, 3) < 0
        || SMW_BA(m, sid_state.envelope_counter, 3) < 0
        || SMW_BA(m, sid_state.envelope_state, 3) < 0
        || SMW_BA(m, sid_state.hold_zero, 3) < 0) {
        return -1;
    }

    if (0
        || SMW_WA(m, sid_state.rate_counter_period, 3) < 0
        || SMW_WA(m, sid_state.exponential_counter_period, 3) < 0) {
        return -1;
    }

    if (0
        || SMW_BA(m, sid_state.envelope_pipeline, 3) < 0
        || SMW_BA(m, sid_state.shift_pipeline, 3) < 0
        || SMW_DWA(m, sid_state.shift_register_reset, 3) < 0
        || SMW_DWA(m, sid_state.floating_output_ttl, 3) < 0
        || SMW_WA(m, sid_state.pulse_output, 3) < 0
        || SMW_B(m, sid_state.write_pipeline) < 0
        || SMW_B(m, sid_state.write_address) < 0
        || SMW_B(m, sid_state.voice_mask) < 0) {
        return -1;
    }
    return 0;
}

static int sid_snapshot_read_resid_module(snapshot_module_t *m, int sidnr)
{
    sid_snapshot_state_t sid_state;

    if (0
        || SMR_BA(m, sid_state.sid_register, 32) < 0
        || SMR_B(m, &(sid_state.bus_value)) < 0
        || SMR_DW(m, &(sid_state.bus_value_ttl)) < 0
        || SMR_DWA(m, sid_state.accumulator, 3) < 0
        || SMR_DWA(m, sid_state.shift_register, 3) < 0
        || SMR_WA(m, sid_state.rate_counter, 3) < 0
        || SMR_WA(m, sid_state.exponential_counter, 3) < 0
        || SMR_BA(m, sid_state.envelope_counter, 3) < 0
        || SMR_BA(m, sid_state.envelope_state, 3) < 0
        || SMR_BA(m, sid_state.hold_zero, 3) < 0) {
        return -1;
    }

    if (0
        || SMR_WA(m, sid_state.rate_counter_period, 3) < 0
        || SMR_WA(m, sid_state.exponential_counter_period, 3) < 0) {
        return -1;
    }

    if (0
        || SMR_BA(m, sid_state.envelope_pipeline, 3) < 0
        || SMR_BA(m, sid_state.shift_pipeline, 3) < 0
        || SMR_DWA(m, sid_state.shift_register_reset, 3) < 0
        || SMR_DWA(m, sid_state.floating_output_ttl, 3) < 0
        || SMR_WA(m, sid_state.pulse_output, 3) < 0
        || SMR_B(m, &(sid_state.write_pipeline)) < 0
        || SMR_B(m, &(sid_state.write_address)) < 0
        || SMR_B(m, &(sid_state.voice_mask)) < 0) {
        return -1;
    }

    sid_state_write(sidnr, &sid_state);

    return 0;
}
#endif

/* ---------------------------------------------------------------------*/

static const char snap_module_name_extended1[] = "SIDEXTENDED";
static const char snap_module_name_extended2[] = "SIDEXTENDED2";
static const char snap_module_name_extended3[] = "SIDEXTENDED3";
#define SNAP_MAJOR_EXTENDED 1
#define SNAP_MINOR_EXTENDED 2

static int sid_snapshot_write_module_extended(snapshot_t *s, int sidnr)
{
    snapshot_module_t *m;
    int sound, sid_engine;
    const char *snap_module_name_extended = NULL;

    switch (sidnr) {
        default:
        case 0:
            snap_module_name_extended = snap_module_name_extended1;
            break;
        case 1:
            snap_module_name_extended = snap_module_name_extended2;
            break;
        case 2:
            snap_module_name_extended = snap_module_name_extended3;
            break;
    }

    resources_get_int("Sound", &sound);
    resources_get_int("SidEngine", &sid_engine);

    m = snapshot_module_create(s, snap_module_name_extended, SNAP_MAJOR_EXTENDED, SNAP_MINOR_EXTENDED);

    if (m == NULL) {
        return -1;
    }

    switch (sid_engine) {
#ifdef HAVE_RESID
        case SID_ENGINE_RESID:
            if (sid_snapshot_write_resid_module(m, sidnr) < 0) {
                goto fail;
            }
            break;
#endif
        case SID_ENGINE_FASTSID:
            if (sid_snapshot_write_fastsid_module(m, sidnr) < 0) {
                goto fail;
            }
            break;
    }

    return snapshot_module_close(m);

fail:
    snapshot_module_close(m);
    return -1;
}

static int sid_snapshot_read_module_extended(snapshot_t *s, int sidnr)
{
    BYTE major_version, minor_version;
    snapshot_module_t *m;
    int sid_engine;
    const char *snap_module_name_extended = NULL;
    int i;
    BYTE *siddata;

    resources_get_int("SidEngine", &sid_engine);

    switch (sidnr) {
        default:
        case 0:
            snap_module_name_extended = snap_module_name_extended1;
            break;
        case 1:
            snap_module_name_extended = snap_module_name_extended2;
            break;
        case 2:
            snap_module_name_extended = snap_module_name_extended3;
            break;
    }

    /* If the sid engine data that was save does not match the current engine
       then don't try to load the data */
    if (intended_sid_engine != sid_engine) {
        siddata = sid_get_siddata(sidnr);
        for (i = 0; i < 32; ++i) {
            if (!sidnr) {
                sid_store((WORD)i, siddata[i]);
            } else if (sidnr == 1) {
                sid2_store((WORD)i, siddata[i]);
            } else {
                sid3_store((WORD)i, siddata[i]);
            }
        }
        return 0;
    }

    m = snapshot_module_open(s, snap_module_name_extended, &major_version, &minor_version);

    if (m == NULL) {
        return -1;
    }

    /* Do not accept versions higher than current */
    if (major_version > SNAP_MAJOR_EXTENDED || minor_version > SNAP_MINOR_EXTENDED) {
        snapshot_set_error(SNAPSHOT_MODULE_HIGHER_VERSION);
        goto fail;
    }

    switch (sid_engine) {
#ifdef HAVE_RESID
        case SID_ENGINE_RESID:
            if (sid_snapshot_read_resid_module(m, sidnr) < 0) {
                goto fail;
            }
            break;
#endif
        case SID_ENGINE_FASTSID:
            if (sid_snapshot_read_fastsid_module(m, sidnr) < 0) {
                goto fail;
            }
            break;
    }

    return snapshot_module_close(m);

fail:
    snapshot_module_close(m);
    return -1;
}

int sid_snapshot_write_module(snapshot_t *s)
{
    int sids = 0;
    int i;

    resources_get_int("SidStereo", &sids);

    ++sids;

    for (i = 0; i < sids; ++i) {
        if (sid_snapshot_write_module_simple(s, i) < 0) {
           return -1;
        }

        if (sid_snapshot_write_module_extended(s, i) < 0) {
            return -1;
        }
    }

    return 0;
}

int sid_snapshot_read_module(snapshot_t *s)
{
    int sids = 0;
    int i;

    if (sid_snapshot_read_module_simple(s, 0) < 0) {
        return -1;
    }

    if (sid_snapshot_read_module_extended(s, 0) < 0) {
        return -1;
    }

    resources_get_int("SidStereo", &sids);
    ++sids;

    for (i = 1; i < sids; ++i) {
        if (0
            || sid_snapshot_read_module_simple(s, i) < 0
            || sid_snapshot_read_module_extended(s, i) < 0) {
            return -1;
        }
    }
    return 0;
}
