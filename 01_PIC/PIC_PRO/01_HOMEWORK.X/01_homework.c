/*
 * File:   01_homework.c
 * Author: dnyan
 *
 * Created on 25 February, 2026, 8:10 PM
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
    int i;
    TRISD = 0x00;

    int arr[9]={0x00,0x01,0x03,0x07,0x0F,0x1F,0x3F,0x7F,0xFF};

    while(1)   // ? ADD THIS
    {
        for(i=0;i<9;i++){
            PORTD = arr[i];
            DELAY(300);
        }

        for(i=0;i<9;i++){
            PORTD = ~arr[i];
            DELAY(300);
        }
    }
}
