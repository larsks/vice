/*
 * video.c - Video implementation for BeOS.
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

#define EXACT_TYPE_NEEDED

#include "vicewindow.h"
#include <Bitmap.h>
#include <Screen.h>
#include <stdlib.h>

extern "C" {
#include "vice.h"
#include "cmdline.h"
#include "log.h"
#include "palette.h"
#include "raster.h"
#include "resources.h"
#include "types.h"
#include "ui.h"
#include "uiapi.h"
#include "utils.h"
#include "video.h"
#include "videoarch.h"
}

/* #define DEBUG_VIDEO */

#ifdef DEBUG_VIDEO
#define DEBUG(x) log_debug x
#else
#define DEBUG(x)
#endif

void video_resize(void);

/* Main Objects */
int number_of_canvas = 0;

/* ------------------------------------------------------------------------ */
/* Video-related resources.  */

/* Flag: are we in fullscreen mode?  */
int fullscreen_enabled;

static resource_t resources[] = {
    { NULL }
};

int video_arch_init_resources(void)
{
    return resources_register(resources);
}

int video_init_cmdline_options(void)
{
    return 0;
}

/* ------------------------------------------------------------------------ */
/* Initialization.  */
int video_init(void)
{

    return 0;
}

/* ------------------------------------------------------------------------ */
/* Frame buffer functions.  */
int video_frame_buffer_alloc(video_frame_buffer_t **f,
                       unsigned int width,
                       unsigned int height)
{
	*f = (video_frame_buffer_t *) xmalloc(sizeof(video_frame_buffer_t));
	(*f)->width = width;
	(*f)->height = height;
	(*f)->buffer = (PIXEL*) xmalloc(width*height);
	(*f)->real_width = width;
	(*f)->bitmap =
		new BBitmap(BRect(0,0,width-1,height-1),B_RGB32,false,true);
	(*f)->vicewindow = NULL;
	DEBUG(("video_frame_buffer_alloc: %dx%d at %x",width,height,(*f)->buffer)); 
	  	
    return 0;
}

void video_frame_buffer_free(video_frame_buffer_t *f)
{
	if (!f)
		return;

	DEBUG(("video_frame_buffer_free: %x",f->buffer)); 
	/* avoid update of the window with an already deleted bitmap */
	if (f->vicewindow)
		f->vicewindow->bitmap = NULL;
	delete f->bitmap;
	free(f->buffer);
	free(f);
}

void video_frame_buffer_clear(video_frame_buffer_t *f, PIXEL value)
{
	memset(f->buffer, value, f->height * f->width);
}

/* ------------------------------------------------------------------------ */
/* Canvas functions.  */

video_canvas_t *canvas_create(const char *title, unsigned int *width,
                              unsigned int *height, int mapped,
                              void_t exposure_handler,
                              const palette_t *palette, PIXEL *pixel_return)
{
    video_canvas_t *new_canvas;
    DEBUG(("Creating canvas width=%d height=%d", *width, *height));

    new_canvas = (video_canvas_t *)xmalloc(sizeof(struct video_canvas_s));
    if (!new_canvas)
	return (video_canvas_t *) NULL;

    new_canvas->title = stralloc(title);
    video_canvas_set_palette(new_canvas, palette, pixel_return);

    new_canvas->width = *width;
    new_canvas->height = *height;
    new_canvas->palette = palette; 
    
    /* We always use a color depth of 32 and let BBitmap do the rest */ 
    new_canvas->depth = 32;
    
    new_canvas->exposure_handler = (canvas_redraw_t)exposure_handler;
	
	new_canvas->vicewindow = 
		new ViceWindow(BRect(0,0,*width-1,*height-1),title);

	number_of_canvas++;
	new_canvas->vicewindow->MoveTo(number_of_canvas*30,number_of_canvas*30);
    return new_canvas;
}

/* Destroy `s'.  */
void video_canvas_destroy(video_canvas_t *c)
{
	if (c == NULL)
		return;

	delete c->vicewindow;
	free(c->title);
	free(c);
}

/* Make `s' visible.  */
void video_canvas_map(video_canvas_t *c)
{
}

/* Make `s' unvisible.  */
void video_canvas_unmap(video_canvas_t *c)
{
}

/* Change the size of `s' to `width' * `height' pixels.  */
void video_canvas_resize(video_canvas_t *c, unsigned int width,
                         unsigned int height)
{
	c->vicewindow->Resize(width,height);
	c->width = width;
	c->height = height;
	DEBUG(("video_canvas_resize to %d x %d",width,height));
}

/* Set the palette of `c' to `p', and return the pixel values in
   `pixel_return[].  */
int video_canvas_set_palette(video_canvas_t *c, const palette_t *p, PIXEL *pixel_return)
{
	int i;
	c->palette = p;
	DEBUG(("Allocating colors"));
	for (i = 0; i < p->num_entries; i++)
	{
		pixel_return[i] = i;
		c->physical_colors[i] = p->entries[i].red << 16
							|	p->entries[i].green << 8
							|	p->entries[i].blue;
	}
    return 0;
}

/* ------------------------------------------------------------------------ */
void video_canvas_refresh(video_canvas_t *c, video_frame_buffer_t *f,
                          unsigned int xs, unsigned int ys,
                          unsigned int xi, unsigned int yi,
                          unsigned int w, unsigned int h)
{
	video_render_main(c->physical_colors,
                          (BYTE *)(VIDEO_FRAME_BUFFER_START(f)),
                          (BYTE *)(f->bitmap->Bits()),
                          w, h,
                          xs, ys,
                          xs, ys,
                          VIDEO_FRAME_BUFFER_LINE_SIZE(f),
                          f->bitmap->BytesPerRow(),
                          c->depth);
	c->vicewindow->DrawBitmap(f->bitmap,xs,ys,xi,yi,w,h);
	/* we need a connection from the canvas to his framebuffer for window update */ 
	if (c->vicewindow->bitmap == NULL) {
		c->vicewindow->bitmap_offset = BPoint(xs-xi,ys-yi);
		c->vicewindow->bitmap = f->bitmap;
		f->vicewindow = c->vicewindow;
	}
}
