#include <LPC214X.H>

#define rs 1<<8
#define e 1<<9


#define c1 1<<20
#define c2 1<<21
#define c3 1<<22
#define c4 1<<23


#define r1 1<<16
#define r2 1<<17
#define r3 1<<18
#define r4 1<<19


void delay(int a)
{
	int i,j;
	for(i=0;i<a;i++)
	{for(j=0;j<i;j++)
		{
		}
	}
}

void cmd(char cm)
{
	IOSET0=cm;
	IOCLR0=rs;
	IOSET0=e;
	delay(100);
	IOCLR0=e;
	IOCLR0=cm;
}

void data(char dt)
{
	IOSET0=dt;
	IOSET0=rs;
	IOSET0=e;
	delay(100);
	IOCLR0=e;
	IOCLR0=dt;
	IOCLR0=rs;
}

int key()
{
	while(1)
	{
	IOCLR1=r1;/////r1=0
	IOSET1=r2|r3|r4; ///r2 r3 r4 =1
	if((IOPIN1&c1)==0)
	{
		while((IOPIN1&c1)==0);
		return('7');
	
	}
	if((IOPIN1 & c2)==0)
	{
		while((IOPIN1 & c2)==0);
		return('8');
	}
	if((IOPIN1&c3)==0)
	{
		while((IOPIN1&c3)==0);
		return('9');
	
	}
	if((IOPIN1&c4)==0)
	{
		while((IOPIN1&c4)==0);
		cmd(0x01);
	//	return('c');
		delay(300);
cmd(0x01);

		
	}
	
	
	
	
	
	
	IOCLR1=r2;   //r2=0 
	IOSET1=r1|r3|r4; // r1 r3 r4 =1
	if((IOPIN1&c1)==0)
	{
		while((IOPIN1&c1)==0);
		return('4');
	
	}
	if((IOPIN1 & c2)==0)
	{
		while((IOPIN1 & c2)==0);
		return('5');
	
	}
	if((IOPIN1&c3)==0)
	{
		while((IOPIN1&c3)==0);
		return('6');
	
	}
	if((IOPIN1&c4)==0)
	{
		while((IOPIN1&c4)==0);
		return('*');
	}
	
	
	IOCLR1=r3;
	IOSET1=r1|r2|r4;
	if((IOPIN1&c1)==0)
	{
		while((IOPIN1 & c1)==0);
		return('1');
	
	}
	if((IOPIN1 & c2)==0)
	{
		while((IOPIN1 & c2)==0);
		return('2');
	
	}
	if((IOPIN1&c3)==0)
	{
		while((IOPIN1&c3)==0);
		return('3');
	
	}
	if((IOPIN1&c4)==0)
	{
		while((IOPIN1&c4)==0);
		return('-');
		
	}
	
		IOCLR1=r4;
	IOSET1=r1|r2|r3;
	if((IOPIN1&c1)==0)
	{
		while((IOPIN1&c1)==0);
		return('c');
	
	}
	if((IOPIN1 & c2)==0)
	{
		while((IOPIN1 & c2)==0);
		return('0');
	
	}
	if((IOPIN1&c3)==0)
	{
		while((IOPIN1&c3)==0);
		return('=');
	
	}
	if((IOPIN1&c4)==0)
	{
		while((IOPIN1&c4)==0);
		return('+');
	}
}
}
	int main()
	{
		IODIR0=0x3ff;   /// 11 1111 1111 //
		IODIR1=0x0f<<16;  ////   1111 0000 <<16
			
		
			cmd(0x01);
			cmd(0x0f);
			cmd(0x06);
			cmd(0x38);
			cmd(0x80);
		while(1)
		{
		char r;
		r=key();
	 // cmd(0xc0);
		data(r);
			
		}
	}