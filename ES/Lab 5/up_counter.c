// slightly weird
// figure out difference between up and johnson counter
// understand fiodir part
// makes 

#include<LPC17xx.h>
unsigned int LED;
int main(){
	
	SystemInit();
  SystemCoreClockUpdate();
	
  LPC_PINCON->PINSEL0=0x00000000;
  LPC_GPIO0->FIODIR|=0x0000fff0;
  LED=0x00000000;
  while(1)
    {
        int i,j;
        for( i=0;i<0xff;i++)
        {
            LPC_GPIO0->FIOPIN=i<<4;
            for( j=0;j<500000;j++);
						for( j=0;j<500000;j++);
						for( j=0;j<500000;j++);
        }
    
		}
}
