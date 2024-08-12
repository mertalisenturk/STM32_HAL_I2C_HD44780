#ifndef LIQUIDCRYSTAL_I2C_H_
#define LIQUIDCRYSTAL_I2C_H_

#include "stm32f1xx_hal.h"

/* Command */
#define LCD_CLEARDISPLAY 0x01
#define LCD_RETURNHOME 0x02
#define LCD_ENTRYMODESET 0x04
#define LCD_DISPLAYCONTROL 0x08
#define LCD_CURSORSHIFT 0x10
#define LCD_FUNCTIONSET 0x20
#define LCD_SETCGRAMADDR 0x40
#define LCD_SETDDRAMADDR 0x80

/* Entry Mode */
#define LCD_ENTRYRIGHT 0x00
#define LCD_ENTRYLEFT 0x02
#define LCD_ENTRYSHIFTINCREMENT 0x01
#define LCD_ENTRYSHIFTDECREMENT 0x00

/* Display On/Off */
#define LCD_DISPLAYON 0x04
#define LCD_DISPLAYOFF 0x00
#define LCD_CURSORON 0x02
#define LCD_CURSOROFF 0x00
#define LCD_BLINKON 0x01
#define LCD_BLINKOFF 0x00

/* Cursor Shift */
#define LCD_DISPLAYMOVE 0x08
#define LCD_CURSORMOVE 0x00
#define LCD_MOVERIGHT 0x04
#define LCD_MOVELEFT 0x00

/* Function Set */
#define LCD_8BITMODE 0x10
#define LCD_4BITMODE 0x00
#define LCD_2LINE 0x08
#define LCD_1LINE 0x00
#define LCD_5x10DOTS 0x04
#define LCD_5x8DOTS 0x00

/* Backlight */
#define LCD_BACKLIGHT 0x08
#define LCD_NOBACKLIGHT 0x00

/* Enable Bit */
#define ENABLE 0x04

/* Read Write Bit */
#define RW 0x0

/* Register Select Bit */
#define RS 0x01

/* Device I2C Address */
#define DEVICE_ADDR     (0x27 << 1)

void lcd_Init(uint8_t rows);
void lcd_Clear();
void lcd_Home();
void lcd_NoDisplay();
void lcd_Display();
void lcd_NoBlink();
void lcd_Blink();
void lcd_NoCursor();
void lcd_Cursor();
void lcd_ScrollDisplayLeft();
void lcd_ScrollDisplayRight();
void lcd_PrintLeft();
void lcd_PrintRight();
void lcd_LeftToRight();
void lcd_RightToLeft();
void lcd_ShiftIncrement();
void lcd_ShiftDecrement();
void lcd_NoBacklight();
void lcd_Backlight();
void lcd_AutoScroll();
void lcd_NoAutoScroll();
void lcd_CreateSpecialChar(uint8_t, uint8_t[]);
void lcd_PrintSpecialChar(uint8_t);
void lcd_SetCursor(uint8_t, uint8_t);
void lcd_SetBacklight(uint8_t new_val);
void lcd_LoadCustomCharacter(uint8_t char_num, uint8_t *rows);
void lcd_PrintStr(const char[]);

#endif /* LIQUIDCRYSTAL_I2C_H_ */
