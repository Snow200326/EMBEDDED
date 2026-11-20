#include <LPC214X.H>
#define SW1  (1<<22)
#define LED1 (1<<18)

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

	while(1){
		if((IOPIN1 & SW1) == 1){
			IOSET0 = LED1;
			
		}
		else
		{
			IOCLR0 = LED1;
		}

	}
	
}
	