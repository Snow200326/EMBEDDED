#include <LPC214X.H>
#define SW (1<<15)
#define LED (1<<1)
void DELAY(int x){
	int i=0;
	int j=0;
	for(i=0;i<x;i++){
		for(j=0;j<i;j++);
	}
}
int main(){

	IODIR0 |= LED;
	IODIR0 &= ~SW ;
	
	while(1){
		if((IOPIN0 & SW) == 0 ){
			IOSET0 = LED;
			
		}
		else
		{
			IOCLR0 = LED;
		}
	}
	
}
	