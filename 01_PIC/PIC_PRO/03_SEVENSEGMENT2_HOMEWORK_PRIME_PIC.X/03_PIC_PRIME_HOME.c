/*
 * File:   03_PIC_PRIME_HOME.c
 * Author: dnyan
 *
 * Created on 28 February, 2026, 6:43 PM
 */

#include <xc.h>
#define s1 PORTDbits.RD0
#define s2 PORTDbits.RD1

void Delay(int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<i;j++);
    }
    
}
void main(void) {
    int num[10] ={0x3f,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
    TRISC = 0;
    TRISDbits.RD0 = 0;
    TRISDbits.RD1 = 0;
    int a,temp;
    while(1){
        for(int i=0;i<99 ;i++)
        {
            if(i==2)
            {
             s1 = 0;
             s2 = 1;
             temp = i/10;
             PORTC = num[temp];
             Delay(100);
             s1 = 1;
             s2 = 0;
             temp = i%10;
             PORTC = num[temp];
             Delay(300);
            }
            else if (i%2 !=0)
            {
             s1 = 0;
             s2 = 1;
             temp = i/10;
             PORTC = num[temp];
             Delay(100);
             s1 = 1;
             s2 = 0;
             temp = i%10;
             PORTC = num[temp];
             Delay(200);
            
            }
        }
    }
    return;
}