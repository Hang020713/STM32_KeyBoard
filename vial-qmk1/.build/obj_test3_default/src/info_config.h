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

#ifndef SOFT_SERIAL_PIN
#    define SOFT_SERIAL_PIN A9
#endif // SOFT_SERIAL_PIN

#ifndef SPLIT_USB_DETECT
#    define SPLIT_USB_DETECT
#endif // SPLIT_USB_DETECT

#ifndef SPLIT_USB_TIMEOUT
#    define SPLIT_USB_TIMEOUT 2000
#endif // SPLIT_USB_TIMEOUT

#ifndef SPLIT_USB_TIMEOUT_POLL
#    define SPLIT_USB_TIMEOUT_POLL 10
#endif // SPLIT_USB_TIMEOUT_POLL

#ifndef SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_LAYER_STATE_ENABLE
#endif // SPLIT_LAYER_STATE_ENABLE

#ifndef SPLIT_LED_STATE_ENABLE
#    define SPLIT_LED_STATE_ENABLE
#endif // SPLIT_LED_STATE_ENABLE

#ifndef SPLIT_MODS_ENABLE
#    define SPLIT_MODS_ENABLE
#endif // SPLIT_MODS_ENABLE

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0100
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "QMK"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "test3"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x0000
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0xFEED
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 2
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 4
#endif // MATRIX_ROWS

#ifndef DIRECT_PINS
#    define DIRECT_PINS { {A0,A1}, {A2,A3} }
#endif // DIRECT_PINS

#ifndef DIRECT_PINS_RIGHT
#    define DIRECT_PINS_RIGHT { {B0,B1}, {B2,B3} }
#endif // DIRECT_PINS_RIGHT
