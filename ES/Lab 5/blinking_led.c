#include<LPC17xx.h>
unsigned int i,j;
unsigned long LED = 0x00000010;

int main(void){
	SystemInit();
	SystemCoreClockUpdate();
	
	LPC_PINCON->PINSEL0 = 0x0;
	LPC_GPIO0->FIODIR = 0X10;
	
	LPC_GPIO0->FIOSET = 0x10;
	LED = 0x00000010;
	while(1){
		
		
			LPC_GPIO0->FIOSET = LED;
			
			for(j=0;j<10000;j++);
						
		
			LPC_GPIO0->FIOCLR = LED;
			
			for(j=0;j<10000;j++);
		
	}
	
}
