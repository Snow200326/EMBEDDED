#include <LPC214X.H>

void DELAY(int x){
	int i,j;
	for(i = 0 ;i<x;i++){
		for(j = 0;j<i;j++);
	}
}

int main(){
		int x;
	int arr[10]={0x3F,0x06,0x5B, 0x4F,0x66, 0x6D, 0x7D, 0x07,0x7F,0x6F};
	IODIR0 = 0x00FF00FF;

	for(x=0;x<10;x++){
		IOSET0= arr[x];
		IOSET0= arr[x]<<16;
		DELAY(300);
		IOCLR0 = arr[x];
		IOCLR0 = arr[x]<<16;
	}
	
}