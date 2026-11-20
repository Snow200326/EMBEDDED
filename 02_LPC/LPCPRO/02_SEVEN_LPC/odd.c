 	#include <LPC214X.H>
 	#define S1 (1<<8)
 	#define S2 (1<<9)
 	void delay(int x){
 		int i,j;
 		for(i=0;i<x;i++){
 		for(j=0;j<x;j++){
 		}
 		}
 	}
 	int main(){
 		int i;
 		int temp;
 	int arr[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
 			IODIR0 = 0X3FF;
		while(1){
		for(i=0;i<100;i++){
 			  IOCLR0 = S1;
 				IOSET0 = S2;
				if(i%2!=0 ){
				temp = i/10;
 				IOSET0 = arr[temp];
 				delay(200);
 		   	IOCLR0= arr[temp];
 				
 				//
 				IOCLR0= S2;
 				IOSET0 = S1;
 				temp=i%10;
 			  IOSET0 = arr[temp];
 				delay(200);
 				IOCLR0 = arr[temp];
				
				}
 				
 			}
	}
 	}
