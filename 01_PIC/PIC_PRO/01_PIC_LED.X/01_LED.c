/*
 * File:   01_LED.c
 * Author: dnyan
 *
 * Created on 21 February, 2026, 7:31 PM
 */


#include <xc.h>
void DELAY(int x)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<i;j++);
    }
}
void main(void) {
    TRISA=0x01;
    PORTA=0x0f;
    DELAY(500);
    PORTA=0x0f;
    DELAY(500);
    
    return;
}
