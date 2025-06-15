/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID \
    { 0xD1, 0xB3, 0xE9, 0x72, 0xA4, 0x5B, 0xC5, 0x81 }

#define MATRIX_COLS 1
#define MATRIX_ROWS 2
#define DIRECT_PINS \
    {               \
        { B3 }      \
    }
#define DIRECT_PINS_RIGHT \
    {                     \
        { B4 }            \
    }

#define OLED_DISPLAY_128X64
#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN B11
#define I2C1_SCL_PIN B10
#define OLED_BRIGHTNESS 128

#define EE_HANDS
#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6   // USART TX pin
#define SERIAL_USART_RX_PIN B7   // USART RX pin
#define USART1_REMAP             // Remap USART TX and RX pins on STM32F103 MCUs, see table below.
#define SERIAL_USART_TX_PAL_MODE 7