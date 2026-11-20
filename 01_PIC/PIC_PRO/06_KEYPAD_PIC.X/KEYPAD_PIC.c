/*
 * File:   KEYPAD_PIC.c
 * Author: dnyan
 *
 * Created on 6 March, 2026, 11:33 AM
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

//void String(const  char *s) {
//    while (*s != '\n') {
//        Lcd_data(*s);
//        *s++;
//    }
//
//}

void main(void) {
    TRISD = 0X00;
    TRISB = 0xF0;
    ADCON1 = 0X0F;
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
        PORTB = 0XFE;
        if (PORTB == 0xEE) {
            Lcd_data('7');
        }

        if (PORTB == 0xDE) {
            Lcd_data('8');
        }

        if (PORTB == 0xBE) {
            Lcd_data('9');
        }

        if (PORTB == 0x7E) {
            Lcd_data('/');
        }

        PORTB = 0XFD;
        if (PORTB == 0xED) {
            Lcd_data('4');
        }

        if (PORTB == 0xDD) {
            Lcd_data('5');
        }

        if (PORTB == 0xBD) {
            Lcd_data('6');
        }

        if (PORTB == 0x7D) {
            Lcd_data('*');
        }
        ///R2 ---- ROW 2
        PORTB = 0XFC;
        if (PORTB == 0xEC) {
            Lcd_data('1');
        }

        if (PORTB == 0xDC) {
            Lcd_data('2');
        }

        if (PORTB == 0xBC) {
            Lcd_data('3');
        }

        if (PORTB == 0x7C) {
            Lcd_data('-');
        }
        
         ///R3 ---- ROW 2
        PORTB = 0XF7;
        if (PORTB == 0xE7) {
            Lcd_data('ON');
        }

        if (PORTB == 0xD7) {
            Lcd_data('0');
        }

        if (PORTB == 0xB7) {
            Lcd_data('=');
        }

        if (PORTB == 0x77) {
            Lcd_data('+');
        }
    }
        return;
    }
