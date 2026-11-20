/*
 * File:   ADC_PIC.c
 * Author: dnyan
 *
 * Created on 7 March, 2026, 7:47 PM
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

void Lcd_data(int D) {
    PORTD = D;
    RS = 1;
    RW = 0;
    EN = 1;
    Delay(50);
    EN = 0;

}

void main(void) {
    TRISD = 0X00;
    int ADC_value[4];
    int i = 0, temp = 0;



    TRISCbits.RC0 = 0;
    TRISCbits.RC1 = 0;
    TRISCbits.RC2 = 0;

    ADCON0 = 0X03; // ADC ON , OPEARTION
    ADCON1 = 0X0E; // ONLY ANO IS ANALOG REM SET AS DIGITAL
    ADCON2 = 0X88; // OPERATION TIMING IS 0.25USE, RIGHT SHIFT

    PORTD = 0X00;
    lcd_cmd(0x0f);
    lcd_cmd(0x01);
    lcd_cmd(0x06);
    lcd_cmd(0x38);
    lcd_cmd(0x80);


    while (1) {
        ADCON0bits.GO = 1;
        while (ADCON0bits.GO == 1);
        temp = ADRESH;
        temp <<= 8;
        temp += ADRESL;
        for (i = 0; i < 4; i++) {
            ADC_value[i] = temp % 10;
            temp /= 10;
        }
        for (i = 3; i >= 0; i--) {
            Lcd_data(ADC_value[i] + 48);
        }

    }
    return;
}
