#include <LPC214X.H>
void Delay(int x){
int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<i;j++);
	}
}
void PLL_init(){
	PLL0CON = 0X01;
	PLL0CFG = 0X24;
	
	PLL0FEED = 0xAA;
	PLL0FEED = 0X55;
	
	while(!(PLL0STAT & 1<<10));
	PLL0CON = 0X03;
	
	PLL0FEED = 0xAA;
	PLL0FEED = 0X55;
	VPBDIV = 0X00;
}
void Usart_init(){
	PINSEL0 = 0x05;
	U0LCR = 0x83;
	U0DLL = 0x61;
	U0DLM = 0x00;
	U0LCR =  0x03;
}
void String(char *s){
	while(*s){
	U0THR = *s;
	while(!(U0LSR & 0X20));
	Delay(700);
		*s++;
	}
}
int main(){
	PLL_init();
	Usart_init();
			String("HELLO WELCOME TO LPC.... ");
	while(1){
		

		
	}
}
	