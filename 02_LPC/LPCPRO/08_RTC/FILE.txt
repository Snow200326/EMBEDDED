#include <LPC214X.H>


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
	VPBDIV = 0X01;
	
}
int main(){
	IODIR0 = 1<<0;
	unsigned int pin_state;
	initPLL();
	
	while(1){
		IOSET0 = 1<<0;
		pin_state = 1;
		Delay_timer(1000);
		IOCLR0 = 1<<0;
		pin_state = 0;
		Delay_timer(1000);
		
	}

}
	


