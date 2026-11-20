/*
 * LCD_OPERATION.c
 *
 *  Created on: Apr 27, 2026
 *      Author: dnyan
 */

#include "LCD_OPERATION.h"
#include "stm32f1xx_hal.h"

#define RS GPIO_PIN_9
#define EN GPIO_PIN_10

#define D1 GPIO_PIN_0
#define D2 GPIO_PIN_1
#define D3 GPIO_PIN_2
#define D4 GPIO_PIN_3
#define D5 GPIO_PIN_4
#define D6 GPIO_PIN_5
#define D7 GPIO_PIN_6
#define D8 GPIO_PIN_7

void LCD_Data(char c)
{
	Send_to_Lcd(c,1);
}

void LCD_Cmd(char a)
{
	Send_to_Lcd(a,0);
}
void Send_to_Lcd(char val, int rs)
{
	//SET RS PIN
	HAL_GPIO_WritePin(GPIOA, RS, rs );
	// SEND DATA AND CMD
	HAL_GPIO_WritePin(GPIOA, D1, val & 0x01);
	HAL_GPIO_WritePin(GPIOA, D2, val & 0x02);
	HAL_GPIO_WritePin(GPIOA, D3, val & 0x04);
	HAL_GPIO_WritePin(GPIOA, D4, val & 0x08);
	HAL_GPIO_WritePin(GPIOA, D5, val & 0x10);
	HAL_GPIO_WritePin(GPIOA, D6, val & 0x20);
	HAL_GPIO_WritePin(GPIOA, D7, val & 0x40);
	HAL_GPIO_WritePin(GPIOA, D8, val & 0x80);

	// SET ENABLE PIN ( PLUSE )
	HAL_GPIO_WritePin(GPIOA, EN, 1);
	HAL_Delay(100);
	HAL_GPIO_WritePin(GPIOA, EN, 0);

}
void String(char *s)
{
	while(*s)
	{
		LCD_Data(*s++);
	}
}
void Clear_Screen(){
	HAL_Delay(100);
	LCD_Cmd(0x01);
}

void LCD_Init()
{
//	    HAL_Delay(50);
		LCD_Cmd(0X0F);
	    LCD_Cmd(0x01); // clear
	    LCD_Cmd(0x06); // entry mode
	    LCD_Cmd(0x38); // 8-bit mode, 2 line
}

void Curr_Loc(int r, int c){
	if(r==1)
	{
		c |=0x80;
	}
	else if(r == 2){
		c |= 0xc0;
	}
	LCD_Cmd(c);
	}
