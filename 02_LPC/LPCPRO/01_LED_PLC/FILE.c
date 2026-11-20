#include <LPC214X.H>

void DELAY(int x)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<1000;j++);  
    }
}

int main(void)
{
    int i;
    int arr[11]={0x00,0x01,0x03,0x07,0x0F,0x1F,0x3F,0x7F,0xFF, 0x1FF , 0X3FF};

    IODIR0 = 0xFFF;   

    while(1)
    {
        
        for(i=0;i<=10;i++)
        {
            IOCLR0 = 0xFFF;        
            IOSET0 = arr[i];      
            DELAY(300);
        }

        for(i=1;i<=10;i++)
        {
            IOCLR0 =  arr[i];
          //  IOSET0 = arr[i];
            DELAY(300);
        }
    }
}