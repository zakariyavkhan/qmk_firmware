/* Copyright 2022 Zakariya Khan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    ZakyChanProductions
#define PRODUCT         allez

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { A10, A9, A8, A7 }
#define MATRIX_COL_PINS { B10, B1, B0, B9, B8, B7, B6, B5, B4, B3, A15, A6, A5 }

#define DIODE_DIRECTION COL2ROW

/*
#define ENCODERS_PAD_A { A6 }
#define ENCODERS_PAD_B { A5 }
#define ENCODER_RESOLUTION 4
*/

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
