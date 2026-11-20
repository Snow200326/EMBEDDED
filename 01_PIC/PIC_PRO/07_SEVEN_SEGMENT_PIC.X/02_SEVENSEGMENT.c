/*
 * File:   02_SEVENSEGMENT.c
 * Author: dnyan
 *
 * Created on 26 February, 2026, 8:00 PM
 */


#include <xc.h>
void Delay(int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<i;j++);
    }
    
}
void main(void) {
    int  x[11] = {0x3f,0x06, 0x5B, 0x4F, 0X66,0X6D,0X77,0X7C,0X39, 0X05E};
    TRISC = 0;
    TRISD = 0;
    for(int i =0 ;i<11 ;i++)
    {
        PORTC = x[i];
        Delay(300);
    }
    for(int i =0 ;i<11 ;i++)
    {
        PORTD = ~x[i];
        Delay(300);
    }
    return;
}
