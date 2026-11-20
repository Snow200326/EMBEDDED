
#include <LPC214X.H>
#define LED (1<<9)
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
int main(){
	char rx = 
	IODIR0 = LED;
	PLL_init();
	Usart_init();
	while(1){

		while(!(U0LSR & 0x01));
		rx = U0RBR;
		if(rx == '1'){
		IOSET0 = LED;
		}
		else if (rx == '0')
		{
			IOCLR0 = LED;
		}
		Delay(700);
	}
}
	