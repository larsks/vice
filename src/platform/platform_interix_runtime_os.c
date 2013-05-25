/*
 * platform_interix_runtime_os.c - Interix runtime version discovery.
 *
 * Written by
 *  Marco van den Heuvel <blackystardust68@yahoo.com>
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

/* Tested and confirmed working on:
*/

#include "vice.h"

#ifdef __INTERIX

#include <stdio.h>
#include <interix/interix.h>
#include <interix/registry.h>

#define NT_SERVER_KEY L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions"
#define NT_SERVER_VALUE L"ProductType"

#define NT_PRODUCT_SUITE_PATH "\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions\\ProductSuite"

#define NT_SBS_PATH "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites\\SmallBusiness\\ConcurrentLimit"

#define NT_FLP_PATH "\\Registry\\Machine\\System\\WPA\\Fundamentals\\Installed"

#define NT_TABLET_PATH "\\Registry\\Machine\\System\\WPA\\TabletPC\\Installed"

#define NT_MCE_PATH "\\Registry\\Machine\\System\\WPA\\MediaCenter\\Installed"

typedef struct winver_s {
    char *name;
    char *windows_name;
    int server;
    int flags;
} winver_t;

static winver_t windows_versions[] = {
    { "Windows NT 4 Workstation", "Microsoft Windows NT 4", 0, 0 },
    { "Windows NT 4 Server", "Microsoft Windows NT 4", 1, 0 },
    { "Windows NT 4 Small Business Server", "Microsoft Windows NT 4", 3, 0 },
    { "Windows NT 4 Enterprise Server", "Microsoft Windows NT 4", 5, 0 },
    { "Windows 2000 Pro", "Microsoft Windows 2000", 0, 0 },
    { "Windows 2000 Server", "Microsoft Windows 2000", 1, 0 },
    { "Windows 2000 Advanced Server", "Microsoft Windows 2000", 5, 0 },
    { "Windows 2000 Datacenter Server", "Microsoft Windows 2000", 6, 0 },
    { "Windows 2000 Powered", "Microsoft Windows 2000", 4, 0 },
    { "Windows XP Pro", "Microsoft Windows XP", 0, 0 },
    { "Windows XP Tablet PC", "Microsoft Windows XP", 0, 1 },
    { "Windows XP Media Center", "Microsoft Windows XP", 0, 2 },
    { "Windows Fundamentals for Legacy PCs", "Microsoft Windows XP", 0, 3 },
    { "Windows 2003 Web Server", "Microsoft Windows Server 2003", 2, 0 },
    { "Windows 2003 Standard Server", "Microsoft Windows Server 2003", 1, 0 },
    { "Windows 2003 Small Business Server", "Microsoft Windows Server 2003", 3, 0 },
    { "Windows 2003 Enterprise Server", "Microsoft Windows Server 2003", 5, 0 },
    { "Windows 2003 Datacenter Server", "Microsoft Windows Server 2003", 6, 0 },
    { NULL, NULL, 0, 0 }
};

static int widelen(char *text)
{
    char *p = text;
    int len = 0;

    while (p[0] != 0 || p[1] != 0) {
        p += 2;
        len += 2;
    }
    return len;
}

static void wide2single(char *wide, char *single)
{
    int i;

    for (i = 0; wide[i * 2] != 0 || wide[(i * 2) + 1] != 0; i++) {
        single[i] = wide[i * 2];
    }
    single[i] = 0;
}

static char *get_windows_version(void)
{
    char windows_name[100];
    char server_name[20];
    char nt_version[10];
    char product_suite[200];
    char temp[200];
    int rcode;
    int i = 0;
    int windows_server = 0;
    int windows_flags = 0;
    int type;
    int found = 0;
    int suite = 0;
    size_t size = 200;
    char *p;
    unsigned long wpa = 0;
    size_t wpa_size = 4;

    rcode = getreg_strvalue((PCWSTR)NT_VERSION_KEY, (PCWSTR)NT_PRODUCT_NAME_VALUE, windows_name, 100);
    if (rcode) {
        rcode = getreg_strvalue((PCWSTR)NT_VERSION_KEY, (PCWSTR)NT_VERSION_VALUE, nt_version, 10);
        if (!strcmp("4.0", nt_version)) {
            sprintf(windows_name, "Microsoft Windows NT 4");
        }
    }

    /* 0 = professional, 1 = tablet pc, 2 = media center, 3 = flp */
    if (!strcmp(windows_name, "Microsoft Windows XP")) {
        rcode = getreg(NT_FLP_PATH, &type, &wpa, &wpa_size);
        if (!rcode) {
            if (wpa) {
                windows_flags = 3;
            }
        }
        rcode = getreg(NT_TABLET_PATH, &type, &wpa, &wpa_size);
        if (!rcode) {
            if (wpa) {
                windows_flags = 1;
            }
        }
        rcode = getreg(NT_MCE_PATH, &type, &wpa, &wpa_size);
        if (!rcode) {
            if (wpa) {
                windows_flags = 2;
            }
        }
    }

    /* 0 = workstation
       1 = standard server
       2 = blade server
       3 = small business server
       4 = appliance server
       5 = enterprise server
       6 = datacenter server */
    rcode = getreg_strvalue((PCWSTR)NT_SERVER_KEY, (PCWSTR)NT_SERVER_VALUE, server_name, 20);
    if (!rcode) {
        if (!strcmp("ServerNT", server_name) || !strcmp("LanmanNT", server_name)) {
            rcode = getreg(NT_PRODUCT_SUITE_PATH, &type, &product_suite, &size);
            if (rcode) {
                windows_server = 1;
            } else {
                p = product_suite;
                while (!found) {
                    wide2single(p, temp);
                    if (!strcmp(temp, "Blade")) {
                        suite |= 1;
                    }
                    if (!strcmp(temp, "Small Business")) {
                        suite |= 2;
                    }
                    if (!strcmp(temp, "Server Appliance")) {
                        suite |= 4;
                    }
                    if (!strcmp(temp, "Enterprise")) {
                        suite |= 8;
                    }
                    if (!strcmp(temp, "DataCenter")) {
                        suite |= 16;
                    }
                    p += widelen(p);
                    p += 2;
                    if (p[0] == 0 && p[1] == 0) {
                        found = 1;
                    }
                }
                if (suite >= 16) {
                    windows_server = 6;
                } else if (suite >= 8) {
                    windows_server = 5;
                } else if (suite >= 4) {
                    windows_server = 4;
                } else if (suite >= 2) {
                    windows_server = 3;
                } else if (suite >= 1) {
                    windows_server = 2;
                } else {
                    windows_server = 1;
                }
            }
        }
    }

    /* Check the table for a matching entry */
    for (i = 0; windows_versions[i].name; i++) {
        if (!strcmp(windows_versions[i].windows_name, windows_name)) {
            if (windows_versions[i].server == windows_server) {
                if (windows_versions[i].flags == windows_flags) {
                    return windows_versions[i].name;
                }
            }
        }
    }
    return "Unknown Windows version";
}

static char interix_platform_version[100] = "";

char *platform_get_interix_runtime_os(void)
{
    char interix_version[10];
    char service_pack[100];
    int rcode;

    rcode = getreg_strvalue((PCWSTR)INTERIX_KEY, (PCWSTR)REGVAL_CURRENTRELEASE, interix_version, 10);
    if (rcode) {
        sprintf(interix_platform_version, "Unknown interix version");
    } else {
        sprintf(interix_platform_version, "Interix %s", interix_version);
    }

    rcode = getreg_strvalue((PCWSTR)NT_SERVICEPACK_KEY, (PCWSTR)NT_SERVICEPACK_VALUE, service_pack, 100);
    if (!rcode) {
        sprintf(interix_platform_version, "%s (%s %s)", interix_platform_version, get_windows_version(), service_pack);
    } else {
        sprintf(interix_platform_version, "%s (%s)", interix_platform_version, get_windows_version());
    }

    return interix_platform_version;
}
#endif
