/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef FFMPEG_COMPAT_TMS470_MATH_H
#define FFMPEG_COMPAT_TMS470_MATH_H

#include_next <math.h>

#undef INFINITY
#undef NAN

#define INFINITY (*(const float*)((const unsigned []){ 0x7f800000 }))
#define NAN      (*(const float*)((const unsigned []){ 0x7fc00000 }))

#endif /* FFMPEG_COMPAT_TMS470_MATH_H */
