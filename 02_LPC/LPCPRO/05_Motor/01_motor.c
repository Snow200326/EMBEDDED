#include <LPC214X.H>
#define IN1 (1<<0);
#define IN2 (1<<1);
#define EN1 (1<<2);

#define IN3 (1<<8);
#define IN4 (1<<9);
#define EN2 (1<<10);

void DELAY(int x){
int i=0,j=0;
	while(i<x){
		while(j<i){j++;}
		i++;
	}
}

int main(){
IODIR0 = 0X707	;
	while(1){
		IOSET0 = EN1;
		IOCLR0 = IN2;
		IOSET0 = IN1;
		DELAY(200);
		IOCLR0 = EN1
		IOSET0 = EN2;
		IOCLR0 = IN4;
		IOSET0 = IN3;
		
	}

}