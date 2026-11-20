/*
 * File:   05_HOMEWORK_MOTOR.c
 * Author: dnyan
 *
 * Created on 5 March, 2026, 11:04 AM
 */
#include <xc.h>
#define IN1 PORTCbits.RC0
#define IN2 PORTCbits.RC1
#define EN  PORTCbits.RC2
#define IN3 PORTCbits.RC6
#define IN4 PORTCbits.RC7
#define S1  PORTDbits.RD0
#define S2  PORTDbits.RD1
#define S3  PORTDbits.RD2
#define S4  PORTDbits.RD3


void Delay(int x){

    for(int i = 0;i<x;i++)
    {
        for(int j=0;j<i;j++);
    }
}
void MotorRotation(int a,int b,int c ,int d)
{
    EN = 1;
    IN1 = a;
    IN2 = b;
    
    IN3 = c;
    IN4 = d;
}
void MotorDirectionSwitch()
{
    if(S1 == 1)
    {
       MotorRotation(1,0,1,0); 
        
    }
    else if(S2 == 1)
    {
        MotorRotation(0,1,0,1); 
    }
     else if(S3 == 1)
    {
        MotorRotation(1,0,0,1); 
    }
     else if(S4 == 1)
    {
        MotorRotation(0,1,1,0); 
    }
     else
    {
     MotorRotation(0,0,0,0); 
    }  
}


void main(void) {
    TRISC = 0x00;
    TRISD = 0X0F;
   
    while (1){
        MotorDirectionSwitch();
    }
    return;
}

