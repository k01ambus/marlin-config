/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration_adv.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_BMPWIDTH  64

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000011,B11110000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B11111000,B00000111,B11111000,B00000111,B11000000,B00000000,
  B00000000,B00000001,B11111100,B00000011,B11110000,B00001111,B11100000,B00000000,
  B00000000,B00000011,B11111110,B00000000,B11000000,B00011111,B11110000,B00000000,
  B00000000,B00000011,B11111110,B00000000,B00000000,B00011111,B11110000,B00000000,
  B00000000,B00000011,B11111110,B00000000,B00000000,B00011111,B11110000,B00000000,
  B00000000,B00000011,B11111110,B00000000,B00000000,B00011111,B11110000,B00000000,
  B00000000,B00000011,B11111100,B00000000,B00000000,B00001111,B11100000,B00000000,
  B00000000,B00000001,B11111000,B00000000,B00000000,B00001111,B11100000,B00000000,
  B00000000,B00000000,B01110000,B00000000,B00000000,B00000011,B10000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00001111,B10000000,B00000000,B00000000,B01110000,B00000000,B00000000,B00000000,
  B00011111,B11000000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,
  B00111111,B11000000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,
  B00111111,B11100000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,
  B00111111,B11100000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,
  B00111111,B11100000,B00000000,B00000000,B01111011,B11000000,B00001111,B00000000,
  B00111111,B11000000,B00000000,B00000000,B01111111,B11110000,B00111111,B11000000,
  B00011111,B10000000,B00000000,B00000000,B01111111,B11111000,B01111111,B11100000,
  B00001111,B00000000,B00000000,B00000000,B01111110,B11111100,B11111001,B11110000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00111100,B11100000,B11110000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00011101,B11100000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00011101,B11100000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00011101,B11100000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00011101,B11100000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00011101,B11100000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00111100,B11100000,B11110000,
  B00000000,B00000000,B00000000,B00000000,B01111100,B01111100,B11111001,B11110000,
  B00000000,B00000000,B00000000,B00000000,B00011111,B11111000,B11111111,B11110000,
  B00000000,B00000000,B00000000,B00000000,B00001111,B11110000,B01111111,B11110000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11100000,B00011111,B01110000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01110000
};

// Saves 310 bytes
#define COMPACT_CUSTOM_BOOTSCREEN_EXT
const unsigned char custom_start_bmp_rle[170] PROGMEM = {
  0x0F, 0x0E, 0x5F, 0x29, 0x7F, 0x28, 0x7F, 0x27, 0x9F, 0x26, 0x9F, 0x27, 0x7F, 0x1B, 0x47, 0x77,
  0x4F, 0x0D, 0x67, 0x57, 0x6F, 0x0B, 0x88, 0x18, 0x8F, 0x0A, 0x8F, 0x04, 0x8F, 0x0A, 0x8F, 0x04,
  0x8F, 0x0A, 0x8F, 0x04, 0x8F, 0x0A, 0x7F, 0x06, 0x6F, 0x0C, 0x5F, 0x07, 0x6F, 0x0E, 0x2F, 0x0A,
  0x2F, 0xF0, 0x81, 0xF2, 0xC5, 0xF2, 0x97, 0xF2, 0x87, 0xF2, 0x78, 0xF2, 0x78, 0xF2, 0x87, 0xF2,
  0x87, 0xF2, 0x95, 0xF2, 0xC0, 0xFF, 0xCA, 0x4F, 0x08, 0x2F, 0x0F, 0x6F, 0x07, 0x3F, 0x0D, 0x7F,
  0x07, 0x3F, 0x0D, 0x8F, 0x06, 0x3F, 0x0D, 0x8F, 0x06, 0x3F, 0x0D, 0x8F, 0x06, 0x30, 0x39, 0x39,
  0x7F, 0x07, 0xA5, 0x78, 0x5F, 0x08, 0xB3, 0x98, 0x3F, 0x09, 0x50, 0x51, 0x41, 0x4F, 0x15, 0x34,
  0x31, 0x24, 0x3F, 0x15, 0x35, 0x20, 0x35, 0x2F, 0x15, 0x35, 0x20, 0x35, 0x2F, 0x15, 0x35, 0x20,
  0x35, 0x2F, 0x15, 0x35, 0x20, 0x35, 0x2F, 0x15, 0x35, 0x20, 0x35, 0x2F, 0x15, 0x34, 0x31, 0x24,
  0x3F, 0x15, 0x42, 0x41, 0x41, 0x4F, 0x17, 0x92, 0xBF, 0x18, 0x74, 0xAF, 0x19, 0x57, 0x40, 0x2F,
  0x2D, 0x2F, 0x2D, 0x2F, 0x2D, 0x2F, 0x2D, 0x2F, 0x2D, 0x23
};