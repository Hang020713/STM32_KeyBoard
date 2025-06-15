// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef DIODE_DIRECTION
#    define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0001
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "B"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "test3"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x9291
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0xFEED
#endif // VENDOR_ID

#ifndef VIAL_KEYBOARD_UID
#    define VIAL_KEYBOARD_UID { 0xD1, 0xB3, 0xE9, 0x72, 0xA4, 0x5B, 0xC5, 0x81 }
#endif // VIAL_KEYBOARD_UID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 2
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 4
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { A7, A8 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { B1, B0 }
#endif // MATRIX_ROW_PINS

#ifndef MATRIX_COL_PINS_RIGHT
#    define MATRIX_COL_PINS_RIGHT { A7, A8 }
#endif // MATRIX_COL_PINS_RIGHT

#ifndef MATRIX_ROW_PINS_RIGHT
#    define MATRIX_ROW_PINS_RIGHT { B1, B0 }
#endif // MATRIX_ROW_PINS_RIGHT
