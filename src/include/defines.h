/*
defines.h
Inkplate 6 Arduino library
David Zovko, Borna Biro, Denis Vajak, Zvonimir Haramustek @ e-radionica.com
September 24, 2020
https://github.com/e-radionicacom/Inkplate-6-Arduino-library

For support, please reach over forums: forum.e-radionica.com/en
For more info about the product, please check: www.inkplate.io

This code is released under the GNU Lesser General Public License v3.0: https://www.gnu.org/licenses/lgpl-3.0.en.html
Please review the LICENSE file included with this example.
If you have any questions about licensing, please contact techsupport@e-radionica.com
Distributed as-is; no warranty is given.
*/

#ifndef __DEFINES_H__
#define __DEFINES_H__

#include "Arduino.h"

#define E_INK_WIDTH  800
#define E_INK_HEIGHT 600

#define BLACK 1
#define WHITE 0

#define INKPLATE_1BIT 0
#define INKPLATE_3BIT 1
#define PAD1          0
#define PAD2          1
#define PAD3          2
#define PWR_GOOD_OK   0b11111010

#define WAKEUP 3
#define WAKEUP_SET                                                                                                     \
    {                                                                                                                  \
        digitalWriteMCP(WAKEUP, HIGH);                                                                                 \
    }
#define WAKEUP_CLEAR                                                                                                   \
    {                                                                                                                  \
        digitalWriteMCP(WAKEUP, LOW);                                                                                  \
    }
#define PWRUP 4
#define PWRUP_SET                                                                                                      \
    {                                                                                                                  \
        digitalWriteMCP(PWRUP, HIGH);                                                                                  \
    }
#define PWRUP_CLEAR                                                                                                    \
    {                                                                                                                  \
        digitalWriteMCP(PWRUP, LOW);                                                                                   \
    }
#define VCOM 5
#define VCOM_SET                                                                                                       \
    {                                                                                                                  \
        digitalWriteMCP(VCOM, HIGH);                                                                                   \
    }
#define VCOM_CLEAR                                                                                                     \
    {                                                                                                                  \
        digitalWriteMCP(VCOM, LOW);                                                                                    \
    }


#define RGB3BIT(r, g, b) ((54UL * (r) + 183UL * (g) + 19UL * (b)) >> 13)
#define RGB8BIT(r, g, b) ((54UL * (r) + 183UL * (g) + 19UL * (b)) >> 8)

#define READ32(c)     (uint32_t)(*(c) | (*((c) + 1) << 8) | (*((c) + 2) << 16) | (*((c) + 3) << 24))
#define READ16(c)     (uint16_t)(*(c) | (*((c) + 1) << 8))
#define ROWSIZE(w, c) (((int16_t)c * w + 31) >> 5) << 2

#define RED(a)   ((((a)&0xf800) >> 11) << 3)
#define GREEN(a) ((((a)&0x07e0) >> 5) << 2)
#define BLUE(a)  (((a)&0x001f) << 3)

#endif