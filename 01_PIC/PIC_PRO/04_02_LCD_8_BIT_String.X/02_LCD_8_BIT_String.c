/*
 * File:   02_LCD_8_BIT_String.c
 * Author: dnyan
 *
 * Created on 28 February, 2026, 8:45 PM
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

void String(const  char *s) {
    while (*s != '\n') {
        Lcd_data(*s);
        *s++;
    }

}

void main(void) {
    char s[] = "Dnyanesh Dahiwa";
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
        //        for (int i = 0; s[i] != '\n'; i++) {
        //            Lcd_data(s[i]);
        //            Delay(20);
        //        }
        String("Hello Dnyanesh...");
        lcd_cmd(0x01);
        Delay(200);
        String("Plz give me ur number....");
        lcd_cmd(0x01);
        lcd_cmd(0xc0);
        Delay(200);
    }
    return;
}
