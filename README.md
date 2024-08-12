# stm32-16x2lcd-i2c-HAL

I just changed the prefix "HD44780" in the functions and the device address to easily access the library for my projects.

HD44780_Clear() ❌ -----> lcd_Clear() ✔

device adress 0x3F ❌ -----> 0x27 ✔

#include "stm32f1xx_hal.h" ✔

Thanks [@eziya](https://github.com/eziya)
