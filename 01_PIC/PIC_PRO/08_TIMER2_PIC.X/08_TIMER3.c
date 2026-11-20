/*
 * File:   08_TIMER3.c
 * Author: dnyan
 *
 * Created on 12 March, 2026, 8:02 PM
 */



#include <xc.h>
#define Led PORTCbits.RC1

void T2_Delay(){
    PR2 = 0X9C;
    T2CONbits.TMR2ON=1;
    while(PIR1bits.TMR2IF == 0);
    PIR1bits.TMR2IF = 0;
    T2CONbits.TMR2ON=0;

}
void main(void) {
    TRISCbits.RC1 = 0;
    
    // TIMER iNIT
    T2CON = 0X0A; // PRESCALE VALUE 32 , 
    
    while(1)
    {
        Led  = 1;
        T2_Delay();
        Led = 0 ;
        T2_Delay();
    }
    return;
}

