/*
 * ui-cmdline-options.c
 *
 * Written by
 *  Ettore Perazzoli <ettore@comm2000.it>
 *  Andr� Fachat <fachat@physik.tu-chemnitz.de>
 *  Andreas Boose <boose@linux.rz.fh-hannover.de>
 *
 * Support for multiple visuals and depths by
 *  Teemu Rantanen <tvr@cs.hut.fi>
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

#include "cmdline.h"

static cmdline_option_t cmdline_options[] = {
    { "-htmlbrowser", SET_RESOURCE, 1, NULL, NULL, "HTMLBrowserCommand", NULL,
      "<command>", "Specify an HTML browser for the on-line help" },
    { "-install", SET_RESOURCE, 0, NULL, NULL,
      "PrivateColormap", (resource_value_t) 1,
      NULL, "Install a private colormap" },
    { "+install", SET_RESOURCE, 0, NULL, NULL,
      "PrivateColormap", (resource_value_t) 0,
      NULL, "Use the default colormap" },
    { "-saveres", SET_RESOURCE, 0, NULL, NULL,
      "SaveResourcesOnExit", (resource_value_t) 1,
      NULL, "Save settings (resources) on exit" },
    { "+saveres", SET_RESOURCE, 0, NULL, NULL,
      "SaveResourcesOnExit", (resource_value_t) 0,
      NULL, "Never save settings (resources) on exit" },
#ifdef USE_VIDMODE_EXTENSION
    { "-fullscreen", SET_RESOURCE, 0, NULL, NULL,
      "UseFullscreen", (resource_value_t) 1,
      NULL, "Enable fullscreen" },
    { "+fullscreen", SET_RESOURCE, 0, NULL, NULL,
      "UseFullscreen", (resource_value_t) 0,
      NULL, "Disable fullscreen" },
#endif
    { "-displaydepth", SET_RESOURCE, 1, NULL, NULL,
      "DisplayDepth", NULL,
      "<value>", "Specify X display depth (1..32)" },
    { NULL }
};

int ui_init_cmdline_options(void)
{
    return cmdline_register_options(cmdline_options);
}

