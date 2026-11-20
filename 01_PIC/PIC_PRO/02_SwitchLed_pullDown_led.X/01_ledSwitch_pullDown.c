/*
 * File:   01_ledSwitch_pullDown.c
 * Author: dnyan
 *
 * Created on 26 February, 2026, 7:38 PM
 */


#include <xc.h>
#define SW  PORTDbits.RD0
#define LED PORTCbits.RC0
void main(void) {
    TRISCbits.RC0 = 0;
    TRISDbits.RD0 = 1;
    while(1){
        if(SW == 1)
        {
            LED = 1;
        }
        else
        {
            LED =0;
        }
    }
    return;
}


