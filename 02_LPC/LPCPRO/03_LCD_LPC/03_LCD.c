#include <LPC214X.H>
#define EN (1<<9)
#define RS (1<<8)
void Delay(int x){
	int i,j;
	i=0;
	j=0;
	while(i<x){
		while(j<i){
			j++;
		}
		i++;
	}
}
void LCD_CMD(int cmd){
    IOCLR0 = RS;        // RS = 0 (command)
    IOSET0 = cmd;
    IOSET0 = EN;
    Delay(100);
    IOCLR0 = EN;
	  IOCLR0 = cmd;
}

void LCD_DATA(char S){
    IOSET0 = RS;      
    IOSET0 = S;
    IOSET0 = EN;
    Delay(100);
    IOCLR0 = EN;
	  IOCLR0 = RS;
	  IOCLR0 = S;
}
void String( char *s){
	while(*s){
	 LCD_DATA(*s++);
	}
}

int main(){
	IODIR0 = 0X3FF;
	LCD_CMD(0x0f);
	LCD_CMD(0x01);
	LCD_CMD(0x06);
	LCD_CMD(0x38);
	LCD_CMD(0x80);
	while(1){
		String("HI DNYANESH");
	}
	
	
}