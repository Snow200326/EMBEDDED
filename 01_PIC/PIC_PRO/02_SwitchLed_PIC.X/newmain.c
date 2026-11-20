/*
 * File:   newmain.c
 * Author: dnyan
 *
 * Created on 25 February, 2026, 8:33 PM
 */


#include <xc.h>
#define LED PORTCbits.RC0       
#define SW  PORTDbits.RD0
void main(void) {
    TRISC = 0;
    TRISD = 1;
    if(SW==0){
        LED = 1;
    }
    else
    {
        LED = 0;
    }
    return;
}
