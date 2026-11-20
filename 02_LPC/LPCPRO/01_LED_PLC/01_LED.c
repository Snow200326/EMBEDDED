#include <LPC214X.H>
int main(){
	IO0DIR = 0X02;
	while(1){
	IOSET0 = 0x02;
	}

 return 0;
}