#include <LPC214X.H>
#define EN (1<<21)
#define RS (1<<20)
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
//    IOCLR1 = RS;        // RS = 0 (command)
//    IOSET1 = cmd;
//    IOSET1 = EN;
//    Delay(100);
//    IOCLR1 = EN;
//	  IOCLR1 = cmd;
//	
	char TEMP = cmd;
	  TEMP = cmd & 0XF0;
	  IOCLR1 = RS;        // RS = 0 (command)
    IOSET1 = TEMP;
    IOSET1 = EN;
    Delay(100);
    IOCLR1 = EN;
	  IOCLR1 = RS;
	  IOCLR1 = cmd;
		Delay(40);
	
	  TEMP = (cmd & 0XF0) << 4;
	  IOCLR1 = RS;        // RS = 0 (command)
    IOSET1 = TEMP;
    IOSET1 = EN;
    Delay(100);
    IOCLR1 = EN;
	  IOCLR1 = RS;
	  IOCLR1 = cmd;
}

void LCD_DATA(char S){
//    IOSET1 = RS;      
//    IOSET1 = S;
//    IOSET1 = EN;
//    Delay(100);
//    IOCLR1 = EN;
//	  IOCLR1 = RS;
//	  IOCLR1 = S;
		char TEMP = S;
	  TEMP = S & 0XF0;
	  IOSET1 = RS;      
    IOSET1 = TEMP;
    IOSET1 = EN;
    Delay(100);
    IOCLR1 = EN;
	  IOCLR1 = RS;
	  IOCLR1 = S;
		Delay(40);
	
	  TEMP = (S & 0XF0) << 4;
	  IOSET1 = RS;      
    IOSET1 = TEMP;
    IOSET1 = EN;
    Delay(100);
    IOCLR1 = EN;
	  IOCLR1 = RS;
	  IOCLR1 = S;
}
void String( char *s){
	while(*s){
	 LCD_DATA(*s++);
	}
}

int main(){
	IODIR1 = 0X3F;
	LCD_CMD(0x0f);
	LCD_CMD(0x01);
	LCD_CMD(0x06);
	
  LCD_CMD(0x20);  
	LCD_CMD(0x80);
	while(1){
		String("HI DNYANESH");
	}
}