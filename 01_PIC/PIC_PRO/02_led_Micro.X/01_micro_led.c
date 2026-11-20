/*
 * File:   01_micro_led.c
 * Author: dnyan
 *
 * Created on 25 February, 2026, 7:26 PM
 */


#include <xc.h>
#define  OUT PORTA
void DELAY(int x)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<i;j++);
    }
}
void main(void) {
    TRISA=0x00;
    while(1){
    OUT =0x01;
    DELAY(500);
    OUT =0x00;
    DELAY(500);
    
    }
   return;
}
