#include <LPC214X.H>
void Delay(int x)
{
	int i,j;
	for(i = 0;i<x;i++){
		for(j=0;j<i;j++);
	}
}
int main(){

	IODIR0 = 0X02;
	
	while(1)
	{
		IOSET0 = 1<<1;
		Delay(200);
		IOCLR0 = 1<<1;
		Delay(200);
	}
}