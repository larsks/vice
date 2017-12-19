/** \file   src/arch/gtk3/widgets/uicart.c
 * \brief   Widget to attach carts
 *
 * Written by
 *  Bas Wassink <b.wassink@ziggo.nl>
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
#include <gtk/gtk.h>
#include <stdbool.h>

#include "machine.h"
#include "resources.h"
#include "debug_gtk3.h"
#include "basewidgets.h"
#include "widgethelpers.h"
#include "basedialogs.h"
#include "cartimagewidget.h"
#include "filechooserhelpers.h"
#include "openfiledialog.h"
#include "savefiledialog.h"
#include "cartridge.h"
#include "vsync.h"
#include "ui.h"

#include "uicart.h"


/** \brief  Enum with various cart types, independent from cartridge.h
 *
 * The #define's in cartridge.h don't provide the values I need, so this will
 * have to do.
 */
typedef enum uicart_type_e {
    UICART_C64_SMART = 0,
    UICART_C64_8KB,
    UICART_C64_16KB,
    UICART_C64_ULTIMAX,
    UICART_C64_FREEZER,
    UICART_C64_GAME,
    UICART_C64_UTIL

    /* TODO: VIC20, Plus4, CBM2 etc enums*/
} uicart_type_t;


/** \brief  Simple (text,id) data structure for the cart type model
 */
typedef struct cart_type_list_s {
    const char *name;
    int id;
} cart_type_list_t;


/** \brief  Available C64 cart types
 *
 * When the 'type' is freezer, games or utilities, a second combo box will
 * be populated with cartridges which fall in that category.
 */
static const cart_type_list_t c64_cart_types[] = {
    { "Smart-attach",   UICART_C64_SMART },
    { "Raw 8KB",        UICART_C64_8KB },
    { "Raw 16KB",       UICART_C64_16KB },
    { "Raw Ultimax",    UICART_C64_ULTIMAX },
    { "Freezer",        UICART_C64_FREEZER },
    { "Games",          UICART_C64_GAME },
    { "Utilities",      UICART_C64_UTIL },
    { NULL,             -1 }
};


/** \brief  File type filters for the dialog
 */
static ui_file_filter_t filters[] = {
    { "Cartridge images", file_chooser_pattern_cart },
    { "All files", file_chooser_pattern_all },
    { NULL, NULL }
};


/* list of cartridge handling functions (to avoid vsid link errors) */
static int  (*crt_detect_func)(const char *filename) = NULL;
static int  (*crt_attach_func)(int type, const char *filename) = NULL;
static void (*crt_freeze_func)(void) = NULL;
static void (*crt_detach_func)(int type) = NULL;
static cartridge_info_t *(*crt_list_func)(void) = NULL;

/* references to widgets used in various event handlers */
static GtkWidget *cart_type_widget = NULL;
static GtkWidget *cart_id_widget = NULL;
static GtkWidget *cart_preview_widget = NULL;

/* forward declarations of functions */
static GtkListStore *create_cart_id_model(unsigned int flags);
static int get_cart_type(void);
static bool attach_cart_image(int type, int id, const char *path);


/** \brief  Handler for the "response" event of the dialog
 *
 * \param[in]   dialog      dialog
 * \param[in]   response_id response ID
 * \param[in]   data        extra event data (unused)
 */
static void on_response(GtkWidget *dialog, gint response_id, gpointer data)
{
    gchar *filename;

    debug_gtk3("got response ID %d\n", response_id);
    switch (response_id) {
        case GTK_RESPONSE_DELETE_EVENT:
            gtk_widget_destroy(dialog);
            break;
        case GTK_RESPONSE_ACCEPT:
            filename = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));
            if (filename != NULL) {
                debug_gtk3("attaching '%s'\n", filename);
                /* just do smart-attach for now */
                if (!attach_cart_image(get_cart_type(), 0, filename)) {
                    ui_message_error(dialog, "VICE Error",
                            "Failed to smart-attach '%s'\n", filename);
                }
                g_free(filename);
            }
            gtk_widget_destroy(dialog);
            break;
    }
}


/** \brief  Handler for the "changed" event of the cart type combo box
 *
 * \param[in]   combo   cart type combo
 * \param[in]   data    extra event data (unused)
 */
static void on_cart_type_changed(GtkComboBox *combo, gpointer data)
{
    GtkListStore *id_model;     /* cart 'ID' model */
    int mask;
    int crt_type;

    crt_type = get_cart_type();
    if (crt_type < 0) {
        return;
    }

    switch (machine_class) {
        case VICE_MACHINE_C64:      /* fall through */
        case VICE_MACHINE_C64SC:    /* fall through */
        case VICE_MACHINE_C128:     /* fall through */
        case VICE_MACHINE_SCPU64:
            switch (crt_type) {
                case UICART_C64_FREEZER:
                    mask = CARTRIDGE_GROUP_FREEZER;
                    break;
                case UICART_C64_GAME:
                    mask = CARTRIDGE_GROUP_GAME;
                    break;
                case UICART_C64_UTIL:
                    mask = CARTRIDGE_GROUP_UTIL;
                    break;
                default:
                    mask = 0x0;
                    break;
            }
            /* update cart ID model and set it */
            id_model = create_cart_id_model(mask);
            gtk_combo_box_set_model(GTK_COMBO_BOX(cart_id_widget),
                    GTK_TREE_MODEL(id_model));
            gtk_combo_box_set_active(GTK_COMBO_BOX(cart_id_widget), 0);
            break;
        default:
            break;
    }
}


/** \brief  Get the ID of the model for the 'cart type' combo box
 *
 * \return  ID or -1 on error
 */
static int get_cart_type(void)
{
    GtkTreeModel *model;
    GtkTreeIter iter;
    GtkComboBox *combo;
    int crt_type = -1;

    combo = GTK_COMBO_BOX(cart_type_widget);

    if (gtk_combo_box_get_active(combo) >= 0) {
        model = gtk_combo_box_get_model(combo);
        if (gtk_combo_box_get_active_iter(combo, &iter)) {
            gtk_tree_model_get(model, &iter, 1, &crt_type, -1);
        }
    }
    return crt_type;
}


/** \brief  Cart attach handler
 *
 * \param[in]   type    cartridge type
 * \param[in]   id      cartridge ID
 * \param[in]   path    path to cartrige image
 *
 * \return  bool
 */
static bool attach_cart_image(int type, int id, const char *path)
{
    if (type == UICART_C64_SMART) {
        return (crt_attach_func(CARTRIDGE_CRT, path) == 0);
    }
    return false;
}



/** \brief  Create model for the 'cart type' combo box
 *
 * This depends on the `machine_class`, so for some machines, this may return
 * an empty (useless) model
 *
 * \return  model
 */
static GtkListStore *create_cart_type_model(void)
{
    GtkListStore *model;
    GtkTreeIter iter;
    const cart_type_list_t *types;
    int i;

    model = gtk_list_store_new(2, G_TYPE_STRING, G_TYPE_INT);
    switch (machine_class) {
        case VICE_MACHINE_C64:      /* fall through */
        case VICE_MACHINE_C64SC:    /* fall through */
        case VICE_MACHINE_C128:     /* fall through */
        case VICE_MACHINE_SCPU64:
            types = c64_cart_types;
            break;
        default:
            return model;
    }

    for (i = 0; types[i].name != NULL; i++) {
        gtk_list_store_append(model, &iter);
        gtk_list_store_set(model, &iter, 0, types[i].name, 1, types[i].id, -1);
    }
    return model;
}



/** \brief  Create a list of cartidges, filtered with \a flags
 *
 * Only valid for c64/c128/scpu
 *
 * \return  Three-column list store (name, crtid, flags)
 */
static GtkListStore *create_cart_id_model(unsigned int flags)
{
    GtkListStore *model;
    GtkTreeIter iter;
    cartridge_info_t *list;
    int i;

    model = gtk_list_store_new(3, G_TYPE_STRING, G_TYPE_INT, G_TYPE_UINT);

    if (crt_list_func != NULL) {
        list = crt_list_func();
    } else {
        return model;
    }


    for (i = 0; list[i].name != NULL; i++) {
        if (list[i].flags & flags) {
            gtk_list_store_append(model, &iter);
            gtk_list_store_set(model, &iter,
                    0, list[i].name,        /* cart name */
                    1, list[i].crtid,       /* cart ID */
                    2, list[i].flags,       /* cart flags */
                    -1);
        }
    }
    return model;
}


/** \brief  Create combo box with main cartridge types
 *
 * \return  GtkComboBox
 */
static GtkWidget *create_cart_type_combo_box(void)
{
    GtkWidget *combo;
    GtkListStore *model;
    GtkCellRenderer *renderer;

    model = create_cart_type_model();
    if (model == NULL) {
        return gtk_combo_box_new();
    }
    combo = gtk_combo_box_new_with_model(GTK_TREE_MODEL(model));
    g_object_unref(model);

    renderer = gtk_cell_renderer_text_new();
    gtk_cell_layout_pack_start(GTK_CELL_LAYOUT(combo), renderer, TRUE);
    gtk_cell_layout_set_attributes(GTK_CELL_LAYOUT(combo), renderer,
            "text", 0, NULL);

    gtk_combo_box_set_active(GTK_COMBO_BOX(combo), 0);

    g_signal_connect(combo, "changed", G_CALLBACK(on_cart_type_changed), NULL);
    return combo;
}


/** \brief  Create combo box with cartridges with adhere to \a mask
 *
 * \param[in]   mask    bitmask to filter cartridges
 *
 * \return  GtkComboBox
 *
 * \note    Only for x64/x64sc/xscp64/x128
 */
static GtkWidget *create_cart_id_combo_box(unsigned int mask)
{
    GtkWidget *combo;
    GtkListStore *model;
    GtkCellRenderer *renderer;

    model = create_cart_id_model(mask);
    if (model == NULL) {
        return gtk_combo_box_new();
    }
    combo = gtk_combo_box_new_with_model(GTK_TREE_MODEL(model));
    g_object_unref(model);

    renderer = gtk_cell_renderer_text_new();
    gtk_cell_layout_pack_start(GTK_CELL_LAYOUT(combo), renderer, TRUE);
    gtk_cell_layout_set_attributes(GTK_CELL_LAYOUT(combo), renderer,
            "text", 0, NULL);

    gtk_combo_box_set_active(GTK_COMBO_BOX(combo), 0);
    return combo;
}


/** \brief  Create the 'extra' widget for the dialog
 *
 * \return  GtkGrid
 */
static GtkWidget *create_extra_widget(void)
{
    GtkWidget *grid;
    GtkWidget *label;

    grid = gtk_grid_new();
    gtk_grid_set_column_spacing(GTK_GRID(grid), 16);
    gtk_grid_set_row_spacing(GTK_GRID(grid), 8);

    label = gtk_label_new("cartridge type");
    gtk_widget_set_halign(label, GTK_ALIGN_START);
    cart_type_widget = create_cart_type_combo_box();
    gtk_grid_attach(GTK_GRID(grid), label, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), cart_type_widget, 1, 0, 1, 1);

    /* TODO: only for c64/c128 */
    label = gtk_label_new("cartridge ID");
    gtk_widget_set_halign(label, GTK_ALIGN_START);
    cart_id_widget = create_cart_id_combo_box(0x0);
    gtk_grid_attach(GTK_GRID(grid), label, 2, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), cart_id_widget, 3, 0, 1, 1);


    gtk_widget_show_all(grid);
    return grid;
}


/** \brief  Create the 'preview' widget for the dialog
 *
 * \return  GtkGrid
 */
static GtkWidget *create_preview_widget(void)
{
    GtkWidget *grid;
    GtkWidget *label;

    grid = gtk_grid_new();
    gtk_grid_set_column_spacing(GTK_GRID(grid), 16);
    gtk_grid_set_row_spacing(GTK_GRID(grid), 8);

    label = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(label), "<b>Cartridge info</b>");
    gtk_grid_attach(GTK_GRID(grid), label, 0, 0, 1, 1);

    label = gtk_label_new("Error, what the hell is cartridge?");
    g_object_set(label, "margin-left", 16, NULL);
    gtk_grid_attach(GTK_GRID(grid), label, 0, 1, 1, 1);

    gtk_widget_show_all(grid);
    return grid;

}



/** \brief  Set function to get a list of cartridges
 *
 * \param[in]   func    list function
 */
void uicart_set_list_func(cartridge_info_t *(*func)(void))
{
    crt_list_func = func;
}




/** \brief  Set function to detect a cartridge's type
 *
 * Appears to be CBM2/Plus4 only
 *
 * \param[in]   func    detect function
 */
void uicart_set_detect_func(int (*func)(const char *))
{
    crt_detect_func = func;
}


/** \brief  Set function to attach a cartridge image
 *
 * \param[in]   func    attach function
 */
void uicart_set_attach_func(int (*func)(int, const char *))
{
    crt_attach_func = func;
}


/** \brief  Set function to trigger a cartridge freeze-button click
 *
 * \param[in]   func    freeze function
 */
void uicart_set_freeze_func(void (*func)(void))
{
    crt_freeze_func = func;
}


/** \brief  Set function to detach a/all cartridges
 *
 * \param[in]   func    freeze function
 */
void uicart_set_detach_func(void (*func)(int))
{
    crt_detach_func = func;
}


/** \brief  Try to smart-attach a cartridge image
 *
 * \param[in]   widget      parent widget (unused)
 * \param[in]   user_data   extra event data (unused)
 *
 * \return  TRUE
 */
gboolean uicart_smart_attach_dialog(GtkWidget *widget, gpointer user_data)
{
    vsync_suspend_speed_eval();

    gchar *filename;

    filename = ui_open_file_dialog(
            widget,
            "Smart-attach cartridge image",
            "Cartridge images",
            file_chooser_pattern_cart,
            NULL);

    if (filename != NULL) {
        debug_gtk3("Got filename '%s'\n", filename);
        if (crt_attach_func != NULL) {
            if (crt_attach_func(CARTRIDGE_CRT, filename) < 0) {
                ui_message_error(widget, "VICE error",
                        "Failed to attach '%s' as a cartridge image",
                        filename);
            } else {
                debug_gtk3("Attached '%s' as valid cartridge image\n", filename);
            }
        }
        g_free(filename);
    }

    return TRUE;
}


/** \brief  Trigger cartridge freeze
 *
 * Called from the menu
 *
 *
 * \return  TRUE
 */
gboolean uicart_trigger_freeze(void)
{
    if (crt_freeze_func != NULL) {
        debug_gtk3("triggering cart freeze\n");
        crt_freeze_func();
    }
    return TRUE;
}


/** \brief  Detach all cartridge images
 *
 * \return  TRUE
 */
gboolean uicart_detach(void)
{
    if (crt_detach_func != NULL) {
        debug_gtk3("detaching latest cartridge image\n");
        crt_detach_func(-1);
    }
    return TRUE;
}


/** \brief  Pop up the cart-attach dialog
 *
 * \param[in]   widget  parent widget (unused)
 * \param[in]   data    extra event data (unused)
 */
void uicart_show_dialog(GtkWidget *widget, gpointer data)
{
    GtkWidget *dialog;
    int i;

    dialog = gtk_file_chooser_dialog_new(
            "Attach a cartridge image",
            ui_get_active_window(),
            GTK_FILE_CHOOSER_ACTION_OPEN,
            /* buttons */
            "Attach", GTK_RESPONSE_ACCEPT,
            "Close", GTK_RESPONSE_DELETE_EVENT,
            NULL, NULL);

    /* add extra widget */
    gtk_file_chooser_set_extra_widget(GTK_FILE_CHOOSER(dialog),
            create_extra_widget());

    /* add preview widget */
    cart_preview_widget = create_preview_widget();
    gtk_file_chooser_set_preview_widget(GTK_FILE_CHOOSER(dialog),
            cart_preview_widget);

    /* add filters */
    for (i = 0; filters[i].name != NULL; i++) {
        gtk_file_chooser_add_filter(GTK_FILE_CHOOSER(dialog),
                create_file_chooser_filter(filters[i], TRUE));
    }

    g_signal_connect(dialog, "response", G_CALLBACK(on_response), NULL);

    gtk_widget_show(dialog);
}
