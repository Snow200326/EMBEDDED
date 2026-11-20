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
    int num[10] ={0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
    TRISC = 0;
    TRISD = 0;
    TRISA = 0;
    for(int j=0 ;j<10 ;j++)
    {
        PORTA = num[j];
        Delay(300);
    }
    for(int i =0 ;i<11 ;i++)
    {
        PORTC = x[i];
        PORTD = x[i];
        Delay(300);
    }
    return;
}
