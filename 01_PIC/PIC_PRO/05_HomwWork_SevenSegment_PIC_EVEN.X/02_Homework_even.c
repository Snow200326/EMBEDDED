/*
 * File:   02_Homework_even.c
 * Author: dnyan
 *
 * Created on 27 February, 2026, 7:20 PM
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
    TRISC = 0;
    int num[5]={0x5B,0x66,0x7D,0x7F};
    for(int i =0 ;i<5;i++)
    {
        PORTC = num[i];
        Delay(300);
    }
    return;
}
