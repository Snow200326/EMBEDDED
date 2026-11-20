/*
 * File:   MAIN.c
 * Author: dnyan
 *
 * Created on 21 May, 2026, 8:08 PM
 */


#include <xc.h>
#define SS PORTDbits.RD0 

void DELAY(int x) {
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= i; j++);
    }
}

void SPI_INIT() {
    SSPCON1 = 0X20; //  0 0 1 0 0 0 0 0 
    SSPSTAT = 0X40; //  0 1 0 0 0 0 0 0
    TRISCbits.RC3 = 0; // SCLK
    TRISCbits.RC4 = 1;//SDI
    TRISCbits.RC5 = 0;//SD0
    TRISDbits.RD0 = 0; // SS
}

void SPI_DATA(unsigned char val) {
    SSPBUF = val;
    while (PIR1bits.SSPIF == 0);
    PIR1bits.SSPIF = 0;
}

void main(void) {
    SPI_INIT();
    while (1) {
        SS = 0;

        SPI_DATA(0x01);
        DELAY(500);

        SPI_DATA(0x16);
        DELAY(500);

        SS = 1;
    }
    return;
}
