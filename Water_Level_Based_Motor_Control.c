#include <REG51.H>

sbit low1 = P1^0;
sbit high1 = P3^0;
sbit motor1 = P2^0;

void main()
{

	while(1)
	{
		if(low1==0)
		{
			if(high1==0)
				motor1 = 1;
			else if(low1==1 && high1==0) 
				motor1 = 1;
			
		}
		else if(low1==1 && high1==1)
				motor1 =0;
	}
}