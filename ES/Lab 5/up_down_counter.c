// works beautifully with hot delays

#include <LPC17xx.h>
unsigned int i,j,k;
unsigned int LED = 1;

int main(void){
  SystemInit();
  SystemCoreClockUpdate();
  
  LPC_PINCON->PINSEL0 =0x0;
  LPC_PINCON->PINSEL0 =0X0;
  LPC_GPIO0->FIODIR |= 0x00000FF0;
  LPC_GPIO2->FIODIR = 0X00000000;
  while(1){
        if(LPC_GPIO2->FIOPIN & 1<<12){
						LPC_GPIO0->FIOPIN = LED<<4;
						for(j=0;j<10000000;j++); // delay
								LED++;
											if(LED==0xff){
													LED=1;
									}
							}
									else if(!(LPC_GPIO2->FIOPIN & 1<<12)){
											 LPC_GPIO0->FIOPIN = LED<<4;
						 for(j=0;j<10000000;j++); // delay
								LED--;
											if(LED==1){
													LED=0xff;
								 }
							}



}
}
