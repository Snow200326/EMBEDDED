/*
 * File:   05_MOTOR_PIC.c
 * Author: dnyan
 *
 * Created on 5 March, 2026, 10:27 AM
 */


#include <xc.h>
#define IN1 PORTCbits.RC0
#define IN2 PORTCbits.RC1
#define EN  PORTCbits.RC2

void Delay(int x){

    for(int i = 0;i<x;i++)
    {
        for(int j=0;j<i;j++);
    }
}
void MotorRotation() {
    EN = 1;
    IN1 = 1;
    IN2 = 0;
    Delay(200);
    
    EN = 1;
    IN1 = 0;
    IN2 = 1;
    Delay(200);
    
    
}

void main(void) {
    TRISC = 0x00;
    while (1) {

        MotorRotation();
    }
    return;
}
