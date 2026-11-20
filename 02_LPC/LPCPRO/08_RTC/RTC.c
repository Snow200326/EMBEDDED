#include <LPC214X.H>
#define EN (1<<9)
#define RS (1<<8)

void Delay_timer(int val){
	T0TCR = 0X00;  // JIST TIMER CFG..
	T0PR = 59999;
	T0TCR = 0x01; // START TIMER 
	while(T0TC < val);
	T0TC = 0;
	T0TCR = 0X00;  // STOP TIMER COUNTING.. 
}
void initPLL(){
	PLL0CON = 0X01;
	PLL0CFG = 0X24;
	PLL0FEED = 0XAA ; PLL0FEED = 0X55;
	while( !(PLL0STAT & 0X400) == 0);
	PLL0CON = 0X03;
	PLL0CON = 0X03;
	PLL0FEED = 0XAA; PLL0FEED = 0X55;
	VPBDIV = 0X0;
}
void LCD_CMD(int cmd){
	  IOCLR0 = RS;        // RS = 0 (command)
    IOSET0 = cmd;
    IOSET0 = EN;
    Delay_timer(100);
    IOCLR0 = EN;
	  IOCLR0 = cmd;
}
void LCD_DATA(char S){
    IOSET0 = RS;      
    IOSET0 = S;
    IOSET0 = EN;
    Delay_timer(100);
    IOCLR0 = EN;
	  IOCLR0 = RS;
	  IOCLR0 = S;
}
void String( char *s){
	while(*s){
	 LCD_DATA(*s++);
	}
}
void RTC_INTI(){
	PREINT = 456;
	PREFRAC = 25024;
	CCR = 0x02; //reset display..
	HOUR = 11;
	MIN = 59;
	SEC = 59;
	CCR = 0X01;
}
	void TIME_DIS(){
		// time is double value
		LCD_CMD(0XC5);
		LCD_DATA((HOUR/10)+ 48);
		LCD_DATA((HOUR%10)+ 48);
		LCD_DATA(' ');
		LCD_DATA(':');
		LCD_DATA((MIN/10)+48);
		LCD_DATA((MIN%10)+ 48);
		LCD_DATA(' ');
		LCD_DATA(':');
		LCD_DATA((SEC/10)+48);
		LCD_DATA((SEC%10)+ 48);
		LCD_DATA(' ');
		LCD_DATA(':');
	}
int main(){
	
	initPLL();
	IODIR0 = 0X3FF;
	LCD_CMD(0x0C);
	LCD_CMD(0x01);
	LCD_CMD(0x06);
	LCD_CMD(0x38);
	// RTC  INIT....................
	RTC_INTI();
	String("HH : MM : SS");
	while(1){
		TIME_DIS();
	}
}

	


