#include <LPC214X.H>
#define sw1 1<<0
#define sw2 1<<1
#define sw3 1<<2
#define sw4 1<<3
void delay(int a)
{
    int i,j;
    for(i=0;i<a;i++)
    for(j=0;j<i;j++);
    
}

int main()
{
    int i; 
    unsigned int arr[42]={512,591,665,742,808,873,926,968,998,1017,1023,1017,998,
        968,926,873,808,742,665,591,512,436,359,282,216,211,151,97,55,25,6,0,6,25,55,97,151,211,216,282,359,436 };
        
        
    PINSEL1=1<<19;///10 // USED TO USE THE ADC , USART , AND DAC...
    IODIR0=0x1000000;

    
    
     while(1)
    {
        if(!(IOPIN0 & sw1))      // TRANGLE
        {
        for(i=0;i<=1023;i++)
        
        {
             DACR=i<<6;
					    delay(5);
        }
        
        for(i=1023;i>=0;i--)
        {
             DACR=i<<6;
					    delay(5);
        }
    }
        
    if(!(IOPIN0 & sw2))     //SQR
    {
        DACR=0x000<<6;
        delay(200);
        DACR=0x3FF<<6;
        delay(200);
        
        
        
    }
    if(!(IOPIN0 & sw3))    //swatooth
    {
        for(i=0;i<=1023;i++)
        
        {
            DACR=i<<6;
        }
        i=0;
        
    }
    
    if(!(IOPIN0 & sw4))    //Sine
    {
        for(i=0;i<42;i++)
        {
            DACR=arr[i]<<6;
            
        }  
    }
	}
}
	
        


/*
#include <LPC214X.H>
#define sw1 1<<0
#define sw2 1<<1
#define sw3 1<<2
#define sw4 1<<3
void delay(int a)
{
    int i,j;
    for(i=0;i<a;i++)
    for(j=0;j<i;j++);
    
}

int main()
{
    int i; 
    unsigned int arr[42]={512,591,665,742,808,873,926,968,998,1017,1023,1017,998,
        968,926,873,808,742,665,591,512,436,359,282,216,211,151,97,55,25,6,0,6,25,55,97,151,211,216,282,359,436 };
        
        
    PINSEL1=2<<18;
    IODIR0=0x100000;
  
    while(1)
    {
			 for(i=0;i<=1023;i++)
        
        {
            DACR=i<<6;
        }
				 for(i=1023;i>=0;i--)
        
        {
            DACR=i<<6;
        }
       
			}

       
        
			}
		 interuupt coe -- -- -- -
		 
		 #include <LPC214x.h>

#define LED (1 << 0)    // LED connected to P0.0

int led_state = 0;      // Track LED ON/OFF state///


// EINT0 Interrupt Service Routine
void EXint0_serve(void) __irq
{
    if (led_state == 0)
    {
        IOSET0 = LED;   // Turn ON LED
        led_state = 1;
    }
    else
    {
        IOCLR0 = LED;   // Turn OFF LED
        led_state = 0;
    }

    EXTINT |= (1 << 0);  // Clear EINT0 flag
    VICVectAddr = 0;     // Acknowledge interrupt
}

// Initialize EINT0 on P0.14
void ExtInt_Init0()
{
    // Configure P0.14 as EINT0 (PINSEL0[27:26] = 10)
   // PINSEL0 &= ~(3 << 26);  // Clear bits
    PINSEL0 |=  (3<<2);  // Set bits to 10//11<2

    VICIntSelect &= ~(1 << 14);         // Use IRQ for EINT0
    VICVectCntl0 = 0x20 | 14;           // Assign slot 0 to EINT0
    VICVectAddr0 = (unsigned long)EXint0_serve;
    VICIntEnable |= (1 << 14);          // Enable EINT0 interrupt

    EXTMODE  |= (1 << 0);               // Edge-sensitive mode
    EXTPOLAR &= ~(1 << 0);              // Falling edge
}

int main()
{
    IODIR0 |= LED;     // Set P0.0 as output
    IOCLR0 = LED;      // Turn off LED initially

    ExtInt_Init0();    // Set up EINT0

    while (1)
    {
        // Nothing in main loop
    }
}
    
    
*/