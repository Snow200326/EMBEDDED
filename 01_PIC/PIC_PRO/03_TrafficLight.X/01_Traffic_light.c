/*
 * File:   01_Traffic_light.c
 * Author: dnyan
 *
 * Created on 25 February, 2026, 7:38 PM
 */


#include <xc.h>
#define R_LED PORTCbits.RC0
#define O_LED PORTDbits.RD0
#define G_LED PORTEbits.RE0

void Delay(int x){
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<i;j++);
    }
}

void main(void) {
    TRISCbits.TRISC0 = 0;
    TRISDbits.TRISD0 = 0;
    TRISEbits.TRISE0 = 0;
    while(1)
    {
        R_LED = 1;
        Delay(500);
        R_LED = 0;
        
        O_LED = 1;
        Delay(300);
        O_LED = 0;
        
        G_LED = 1;
        Delay(500);
        G_LED = 0;
    }
   
    return;
}
