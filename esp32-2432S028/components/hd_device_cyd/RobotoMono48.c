/*******************************************************************************
 * Size: 48 px
 * Bpp: 4
 * Opts: --bpp 4 --size 48 --no-compress --font RobotoMono-Medium.ttf --symbols 1234567890:- --format lvgl -o RobotoMono48.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTOMONO48
#define ROBOTOMONO48 1
#endif

#if ROBOTOMONO48

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+002D "-" */
    0x9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x97, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfd,

    /* U+0030 "0" */
    0x0, 0x0, 0x0, 0x6, 0xad, 0xff, 0xfd, 0xa5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x60, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x90, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xfe, 0xa9, 0xae, 0xff, 0xff, 0xff,
    0x50, 0x0, 0x1f, 0xff, 0xff, 0xf6, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xfe, 0x0, 0x7, 0xff, 0xff,
    0xf5, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf5,
    0x0, 0xdf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0xe, 0xff, 0xff, 0xb0, 0x1f, 0xff, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xff, 0x5,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xff, 0xff, 0xf3, 0x7f, 0xff, 0xff, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x59, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xf7, 0x9f, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x1c, 0xff, 0xff, 0xff, 0x8a, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x4e, 0xff, 0xff, 0xff,
    0xf8, 0xaf, 0xff, 0xff, 0x0, 0x0, 0x0, 0x8f,
    0xff, 0xff, 0xff, 0xff, 0x8a, 0xff, 0xff, 0xf0,
    0x0, 0x2, 0xcf, 0xff, 0xfc, 0xff, 0xff, 0xf8,
    0xaf, 0xff, 0xff, 0x0, 0x5, 0xff, 0xff, 0xf7,
    0x2f, 0xff, 0xff, 0x8a, 0xff, 0xff, 0xf0, 0x9,
    0xff, 0xff, 0xd3, 0x2, 0xff, 0xff, 0xf8, 0xaf,
    0xff, 0xff, 0x2d, 0xff, 0xff, 0xa0, 0x0, 0x2f,
    0xff, 0xff, 0x8a, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x60, 0x0, 0x2, 0xff, 0xff, 0xf8, 0xaf, 0xff,
    0xff, 0xff, 0xfd, 0x20, 0x0, 0x0, 0x2f, 0xff,
    0xff, 0x8a, 0xff, 0xff, 0xff, 0xf9, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xf8, 0x9f, 0xff, 0xff,
    0xe5, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0x78, 0xff, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xf6, 0x6f, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0x43,
    0xff, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xf1, 0xf, 0xff, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0xbf, 0xff, 0xfe, 0x0, 0xaf,
    0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x2f, 0xff,
    0xff, 0x80, 0x4, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x1d, 0xff, 0xff, 0xf2, 0x0, 0xc, 0xff,
    0xff, 0xfd, 0x62, 0x12, 0x6e, 0xff, 0xff, 0xfa,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x10, 0x0, 0x0, 0x4f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x30, 0x0, 0x0, 0x0, 0x0, 0x7, 0xdf,
    0xff, 0xff, 0xff, 0xd7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x25, 0x77, 0x75, 0x20, 0x0,
    0x0, 0x0, 0x0,

    /* U+0031 "1" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4a, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x28, 0xef, 0xff, 0xc0, 0x0,
    0x0, 0x6, 0xcf, 0xff, 0xff, 0xfc, 0x0, 0x4,
    0xaf, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x8e, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x9f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc9, 0xff, 0xff, 0xff,
    0xfd, 0xff, 0xff, 0xfc, 0x9f, 0xff, 0xff, 0x93,
    0xd, 0xff, 0xff, 0xc9, 0xff, 0xb5, 0x0, 0x0,
    0xdf, 0xff, 0xfc, 0x77, 0x10, 0x0, 0x0, 0xd,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0xdf, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0xd, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0xdf, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0xd, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0xdf, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xc0,

    /* U+0032 "2" */
    0x0, 0x0, 0x0, 0x1, 0x6b, 0xdf, 0xff, 0xda,
    0x61, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x19,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x4e, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x20, 0x0, 0x0, 0x0, 0x5f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x10, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xeb,
    0xbc, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0xd,
    0xff, 0xff, 0xfb, 0x30, 0x0, 0x1, 0xaf, 0xff,
    0xff, 0xf3, 0x0, 0x5, 0xff, 0xff, 0xfb, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xff, 0xff, 0x90, 0x0,
    0xbf, 0xff, 0xff, 0x10, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xfd, 0x0, 0xf, 0xff, 0xff, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xf0,
    0x2, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xff, 0x0, 0x2c, 0xcc, 0xcc,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xcf, 0xff, 0xfd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xff, 0xff, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xef, 0xff, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf,
    0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xd1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xe1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xe2, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0xff, 0xe2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5f, 0xff, 0xff, 0xf3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2e, 0xff, 0xff, 0xf5, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e,
    0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1d, 0xff, 0xff, 0xfd, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0x8,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x50, 0x8f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5,
    0x8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x50, 0x8f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf5,

    /* U+0033 "3" */
    0x0, 0x0, 0x0, 0x17, 0xbd, 0xff, 0xfe, 0xb8,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x1, 0xaf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x5, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x2, 0xff,
    0xff, 0xff, 0xfd, 0xa9, 0xad, 0xff, 0xff, 0xff,
    0xf3, 0x0, 0xaf, 0xff, 0xff, 0xe4, 0x0, 0x0,
    0x2, 0xcf, 0xff, 0xff, 0xb0, 0x1f, 0xff, 0xff,
    0xe1, 0x0, 0x0, 0x0, 0x1, 0xef, 0xff, 0xff,
    0x14, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xf4, 0x5e, 0xee, 0xee, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5f, 0xff, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x5c, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x0, 0x0,
    0x0, 0x0, 0x3, 0x77, 0x77, 0x8c, 0xff, 0xff,
    0xff, 0xe1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xbf, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xfe, 0x79, 0x99, 0x98, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xeb,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0xff, 0xfd, 0x8f, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xa4, 0xff,
    0xff, 0xfd, 0x10, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xf5, 0xd, 0xff, 0xff, 0xfd, 0x30, 0x0,
    0x0, 0x2b, 0xff, 0xff, 0xfe, 0x0, 0x4f, 0xff,
    0xff, 0xff, 0xda, 0x89, 0xcf, 0xff, 0xff, 0xff,
    0x50, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x3b, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x30, 0x0, 0x0, 0x0, 0x0, 0x2, 0x7b,
    0xdf, 0xff, 0xdb, 0x72, 0x0, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1e,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0xf1,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0xff, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9f, 0xff, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xff, 0xff,
    0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xfe, 0xff, 0xff, 0xf1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xe9,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xff, 0xff, 0x48, 0xff, 0xff, 0xf1,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xff,
    0xfa, 0x8, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xe1, 0x8, 0xff,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0xff, 0xff, 0x60, 0x8, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xfb, 0x0,
    0x8, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xef, 0xff, 0xf2, 0x0, 0x8, 0xff, 0xff,
    0xf1, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0xff,
    0x70, 0x0, 0x8, 0xff, 0xff, 0xf1, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xfc, 0x0, 0x0, 0x8,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0xff, 0xf2, 0x0, 0x0, 0x8, 0xff, 0xff, 0xf1,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x8, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0,
    0x2f, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xf3,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x6, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0x6f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5,
    0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf5, 0x5f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf5, 0x39, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x9c, 0xff, 0xff, 0xf9, 0x99, 0x93, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff,
    0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xff, 0xf1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xf1,
    0x0, 0x0,

    /* U+0035 "5" */
    0x0, 0xb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x0, 0xdf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfa, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x0, 0x4, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xdf, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0x34, 0x9d, 0xff, 0xfd, 0x94, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xfd, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x30, 0x0, 0x0, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60,
    0x0, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x50, 0x0, 0x6f, 0xff, 0xff,
    0xfe, 0xb9, 0x9b, 0xff, 0xff, 0xff, 0xfe, 0x10,
    0x4, 0xcf, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x8f,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x4, 0x72, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf,
    0xff, 0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xff, 0xff, 0xf7, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xef, 0xff, 0xfb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xef, 0xff, 0xfb, 0x6c, 0xcc, 0xcb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x96,
    0xff, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xf7, 0x3f, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0x30, 0xef,
    0xff, 0xff, 0x30, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xe0, 0x6, 0xff, 0xff, 0xfe, 0x50, 0x0,
    0x0, 0x5f, 0xff, 0xff, 0xf7, 0x0, 0xc, 0xff,
    0xff, 0xff, 0xea, 0x89, 0xdf, 0xff, 0xff, 0xfd,
    0x0, 0x0, 0x1e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x20, 0x0, 0x0, 0x2d, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x30, 0x0,
    0x0, 0x0, 0x7, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5a,
    0xdf, 0xff, 0xeb, 0x72, 0x0, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x69, 0xce,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0xbf, 0xff, 0xff, 0xff, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xdc, 0x40, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xff,
    0xff, 0xff, 0xc6, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xef, 0xff, 0xff, 0xd3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff,
    0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xfe,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xff, 0xf1,
    0x0, 0x6b, 0xef, 0xfd, 0x94, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xd0, 0x6e, 0xff, 0xff, 0xff,
    0xff, 0xb2, 0x0, 0x0, 0xb, 0xff, 0xff, 0xaa,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x30, 0x0,
    0xe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe1, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xda, 0x9b, 0xff, 0xff, 0xff, 0xfa, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0xd3, 0x0, 0x0, 0x1b,
    0xff, 0xff, 0xff, 0x30, 0x2f, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0x90,
    0x2f, 0xff, 0xff, 0xe1, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff, 0xf1,
    0x3f, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x6, 0xff, 0xff, 0xf3, 0x2f, 0xff, 0xff, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf5,
    0x1f, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xf5, 0xf, 0xff, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf5,
    0xc, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xff, 0xff, 0xf3, 0x8, 0xff, 0xff, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff, 0xf0,
    0x3, 0xff, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xc0, 0x0, 0xcf, 0xff, 0xff,
    0x50, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0x60,
    0x0, 0x4f, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x1b,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0xa, 0xff, 0xff,
    0xff, 0xea, 0x9b, 0xff, 0xff, 0xff, 0xf5, 0x0,
    0x0, 0x0, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x1b, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6e, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x6a, 0xdf, 0xff, 0xd9, 0x40, 0x0, 0x0, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7,
    0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbd, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xfb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe,
    0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xef,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xff, 0xff, 0xf1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0xff, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0xfb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xf1,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xef, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xf5, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5f, 0xff, 0xff, 0x60, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x0, 0x0, 0x28, 0xbe, 0xff, 0xfd, 0xb6,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x2, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xa1, 0x0, 0x0, 0x0,
    0x5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe3, 0x0, 0x0, 0x4, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf2, 0x0, 0x0, 0xef,
    0xff, 0xff, 0xfd, 0xa9, 0xbe, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x6f, 0xff, 0xff, 0xf5, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xff, 0x40, 0xc, 0xff, 0xff,
    0xf4, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf9,
    0x0, 0xef, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0xe, 0xff, 0xff, 0xc0, 0xf, 0xff, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xfd, 0x0,
    0xff, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xd0, 0xc, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0xef, 0xff, 0xfa, 0x0, 0x6f,
    0xff, 0xff, 0x50, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0x40, 0x0, 0xdf, 0xff, 0xff, 0x60, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xc0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xea, 0x9a, 0xef, 0xff, 0xff, 0xe1,
    0x0, 0x0, 0x3, 0xdf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc1, 0x0, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x1, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1, 0xdf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0xdf, 0xff, 0xff, 0xb4, 0x10, 0x15, 0xdf, 0xff,
    0xff, 0xb0, 0x0, 0x9f, 0xff, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x9f, 0xff, 0xff, 0x60, 0x1f, 0xff,
    0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xfe, 0x6, 0xff, 0xff, 0xf3, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xff, 0xff, 0xf4, 0xaf, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0x7b, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf9, 0xbf, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x9a,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xf8, 0x8f, 0xff, 0xff, 0x60, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xff, 0xff, 0x53, 0xff,
    0xff, 0xfe, 0x10, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xf1, 0xd, 0xff, 0xff, 0xfd, 0x30, 0x0,
    0x0, 0x5e, 0xff, 0xff, 0xfa, 0x0, 0x4f, 0xff,
    0xff, 0xff, 0xd9, 0x8a, 0xdf, 0xff, 0xff, 0xff,
    0x20, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x50, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x50, 0x0,
    0x0, 0x0, 0x3b, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x20, 0x0, 0x0, 0x0, 0x0, 0x2, 0x7b,
    0xef, 0xff, 0xdb, 0x71, 0x0, 0x0, 0x0,

    /* U+0039 "9" */
    0x0, 0x0, 0x0, 0x3, 0x8c, 0xef, 0xfe, 0xb6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xcf,
    0xff, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xb1, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xca, 0xae, 0xff,
    0xff, 0xff, 0x90, 0x0, 0x0, 0xcf, 0xff, 0xff,
    0xc2, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xf2, 0x0,
    0x4, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x5,
    0xff, 0xff, 0xfa, 0x0, 0x9, 0xff, 0xff, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0x10,
    0xe, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0xff, 0xff, 0x50, 0x1f, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0x90,
    0x2f, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xe0,
    0x2f, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xf0,
    0xe, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xf0, 0xa, 0xff, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0xf0,
    0x4, 0xff, 0xff, 0xff, 0x30, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0xcf, 0xff, 0xff,
    0xf8, 0x20, 0x3, 0xaf, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0x0, 0x6, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x7b, 0xff, 0xff, 0x90, 0x0, 0x0, 0x2, 0xaf,
    0xff, 0xff, 0xff, 0xa2, 0xe, 0xff, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x46, 0x76, 0x40, 0x0,
    0x2f, 0xff, 0xff, 0x30, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xef, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0xf3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1a, 0xff, 0xff, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x4a, 0xff, 0xff,
    0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x3, 0xdd,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x90, 0x0, 0x0,
    0x0, 0x0, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4, 0xff, 0xff, 0xff, 0xfd, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff,
    0xec, 0xa6, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+003A ":" */
    0x0, 0x7b, 0xca, 0x40, 0x0, 0xbf, 0xff, 0xff,
    0x70, 0x6f, 0xff, 0xff, 0xff, 0x1a, 0xff, 0xff,
    0xff, 0xf6, 0xaf, 0xff, 0xff, 0xff, 0x67, 0xff,
    0xff, 0xff, 0xf3, 0x1e, 0xff, 0xff, 0xfa, 0x0,
    0x1a, 0xef, 0xe7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7b, 0xca, 0x40, 0x0, 0xbf,
    0xff, 0xff, 0x70, 0x6f, 0xff, 0xff, 0xff, 0x1a,
    0xff, 0xff, 0xff, 0xf6, 0xaf, 0xff, 0xff, 0xff,
    0x67, 0xff, 0xff, 0xff, 0xf3, 0x1e, 0xff, 0xff,
    0xfa, 0x0, 0x1a, 0xef, 0xe7, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 461, .box_w = 20, .box_h = 5, .ofs_x = 5, .ofs_y = 13},
    {.bitmap_index = 50, .adv_w = 461, .box_w = 23, .box_h = 35, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 453, .adv_w = 461, .box_w = 15, .box_h = 35, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 461, .box_w = 25, .box_h = 34, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1141, .adv_w = 461, .box_w = 23, .box_h = 34, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1532, .adv_w = 461, .box_w = 26, .box_h = 34, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1974, .adv_w = 461, .box_w = 23, .box_h = 34, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2365, .adv_w = 461, .box_w = 24, .box_h = 34, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2773, .adv_w = 461, .box_w = 24, .box_h = 34, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3181, .adv_w = 461, .box_w = 23, .box_h = 34, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 3572, .adv_w = 461, .box_w = 24, .box_h = 34, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3980, .adv_w = 461, .box_w = 9, .box_h = 28, .ofs_x = 11, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 0, 0, 1, 2, 3, 4, 5,
    6, 7, 8, 9, 10, 11
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 45, .range_length = 14, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 14, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t RobotoMono48 = {
#else
lv_font_t RobotoMono48 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 36,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ROBOTOMONO48*/
