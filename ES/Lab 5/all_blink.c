// all led's blink

#include <LPC17xx.h>    //wap to tuen on/off leds at CNA
main()
{
    unsigned int i;
    SystemInit();
    SystemCoreClockUpdate();
    LPC_PINCON->PINSEL0&=0XFF0000FF;
    LPC_GPIO0->FIODIR|=0X00000FF0;
while(1)
{
    for(i=0;i<5000000;i++);
    LPC_GPIO0->FIOSET=0X00000FF0;
    for(i=0;i<5000000;i++);
    LPC_GPIO0->FIOCLR=0X00000FF0;
}
}
