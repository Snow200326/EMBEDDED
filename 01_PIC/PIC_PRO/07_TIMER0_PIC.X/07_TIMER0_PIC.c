/*
 * File:   07_TIMER0_PIC.c
 * Author: dnyan
 *
 * Created on 11 March, 2026, 8:27 PM
 */

#include <xc.h>
#define Led PORTCbits.RC0

void T0_Delay(){
    TMR0H = 0XFF;
    TMR0L = 0XB0;
    T0CONbits.TMR0ON = 1;
    while(INTCONbits.TMR0IF == 0);
    INTCONbits.TMR0IF = 0;
    T0CONbits.TMR0ON = 0;
}
void main(void) {
    TRISCbits.RC0 = 0;
    
    // TIMER iNIT
    T0CON = 0X07; // PRESCALE VALUE 32 , 
    
    while(1)
    {
        Led  = 1;
        T0_Delay();
        Led = 0 ;
        T0_Delay();
    }
    return;
}
