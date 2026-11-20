#include <LPC214X.H>
#define SW1 (1<<16)
#define LED1 (1<<16)
#define SW2 (1 <<25)
#define LED2 (1<<21)
void DELAY(int x){
	int i=0;
	int j=0;
	for(i=0;i<x;i++){
		for(j=0;j<i;j++);
	}
}
int main(){

	IODIR0 |= LED1;//OUTPUT
	IODIR1 &= ~SW1 ; // INPUT
	
 IODIR0 |= LED2;//OUTPUT
	IODIR1 &= ~SW2 ; // INPUT
	
	while(1){
		if((IOPIN1 & SW1) == 0 ){
			IOSET0 = LED1;
			
		}
		else
		{
			IOCLR0 = LED1;
		}
			if((IOPIN1 & SW2) == 0 ){
			IOSET0 = LED2;
			
		}
		else
		{
			IOCLR0 = LED2;
		}
		
		
	}
	
}
	