#pragma once

#define VIAL_KEYBOARD_UID \
    { 0xD1, 0xB3, 0xE9, 0x72, 0xA4, 0x5B, 0xC5, 0x81 }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0 }

#define MATRIX_ROWS 1
#define MATRIX_COLS 1

#define OLED_DISPLAY_128X64
#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN B11
#define I2C1_SCL_PIN B10
#define OLED_BRIGHTNESS 128