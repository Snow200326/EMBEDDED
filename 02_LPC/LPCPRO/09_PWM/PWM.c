#include <LPC214X.H>
void Pwm_Lpc(){
	PWMPCR = 0x600;
	PWMTCR = 0x0A; //  pwm enable and counter off
	PWMTCR = 0x02; // pwm off and counter off
	PWMMR0 = 150000;
	PWMTCR = 0x09; // pwm enalbe and counter start..
	PWMMCR = 0x02;
}
int main()
{
	PINSEL0 = 0x8002;
	// pwm init
	Pwm_Lpc();
	while(1){
		PWMMR1 = 75000; // 50% duty
		PWMMR2 = 15000; // 10 %duty
		PWMLER = 0x06;
	}
	
}