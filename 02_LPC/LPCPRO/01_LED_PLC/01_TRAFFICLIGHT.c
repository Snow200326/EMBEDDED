#include <LPC214X.H>
void Delay(int x)
{
	int i,j;
	i=0;
	j=i;
	while(i<x)
	{
		while(j<i){
			j++;
		}
		i++;
	}
	
}
int main(){
	
	IODIR0 = 0X07;
	
	while(1){
		IOSET0 = 0X01;
		Delay(200);
		IOCLR0 = 0X01;
		Delay(200);
		IOSET0 = 0X02;
		Delay(200);
		IOCLR0 = 0X02;
		Delay(200);
		IOSET0 = 0X04;
		Delay(200);
		IOCLR0 = 0X04;
		Delay(200);
	
	}

}