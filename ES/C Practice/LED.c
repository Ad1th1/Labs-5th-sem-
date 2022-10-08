#include<LPC17xx.h>
unsigned int j;
unsigned long LED = 0x00000FF0;

int main(void){
    SystemInit();
    SystemCoreClockUpdate();

    LPC_PINCON->PINSEL0 = 0x00000000;
    LPC_GPIO0->FIODIR = 0x00000FF0;

    while(1){
        LPC_GPIO0->FIOSET = LED;
        for(j=0;j<10000;j++);

        LPC_GPIO0->FIOCLR = LED;
        for(j=0;j<10000;j++);
    }
}
