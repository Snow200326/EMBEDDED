/*
 * File:   04_LCD_PIC.c
 * Author: dnyan
 *
 * Created on 28 February, 2026, 7:51 PM
 */


#include <xc.h>
#define RS PORTCbits.RC0
#define RW PORTCbits.RC1
#define EN PORTCbits.RC2

void Delay(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < i; j++);
    }
}

void lcd_cmd(int X) {
    PORTD = X;
    RS = 0;
    RW = 0;
    EN = 1;
    Delay(50);
    EN = 0;
}

void Lcd_data(char D) {
    PORTD = D;
    RS = 1;
    RW = 0;
    EN = 1;
    Delay(50);
    EN = 0;

}

void main(void) {
    TRISD = 0;
    TRISCbits.RC0 = 0;
    TRISCbits.RC1 = 0;
    TRISCbits.RC2 = 0;

    PORTD = 0X00;
    lcd_cmd(0x0f);
    lcd_cmd(0x01);
    lcd_cmd(0x06);
    lcd_cmd(0x38);
    lcd_cmd(0x80);
    while (1) {
        Lcd_data('H');
        Delay(200);
        Lcd_data('1');
        Delay(200);
        Lcd_data('a');
        Delay(200);
        Lcd_data('@?');
        Delay(200);

    }




    return;
}
