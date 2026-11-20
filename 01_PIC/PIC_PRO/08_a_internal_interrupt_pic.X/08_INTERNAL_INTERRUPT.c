/*
 * File:   08_INTERNAL_INTERRUPT.c
 * Author: dnyan
 *
 * Created on 14 March, 2026, 7:32 PM
 */


#include <xc.h>
#define LED PORTCbits.RC4
void main(void) {
    TRISCbits.RC4 = 0;
    RCONbits.IPEN = 0;
    INTCON = 0XE0;
    T0CON = 0X87;
    TMR0H = 0XFF;
    TMR0L = 0XB0;
    LED  = 0;
    while(1);
    return;
}

#pragma code TM0_ISR = 0X08
#pragma interrupt TM0_ISR

void TM0_ISR()
{
       
    TMR0H = 0XFF;
    TMR0L = 0XB0;
    LED = ~LED;
    INTCONbits.TMR0IF = 0;

}
