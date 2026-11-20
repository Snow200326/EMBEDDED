/*
 * LCD_OPERATION.H
 *
 *  Created on: Apr 27, 2026
 *      Author: dnyan
 */

#ifndef INC_LCD_OPERATION_H_
#define INC_LCD_OPERATION_H_

void LCD_Cmd (char a);
void LCD_Data(char c);
void String(char *s);
void Clear_Screen();
void LCD_Init();
void Curr_Loc(int r, int c);
void Send_to_Lcd(char val, int rs);

#endif /* INC_LCD_OPERATION_H_ */
