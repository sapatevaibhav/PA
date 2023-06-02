#include <xc.h>
#include <pic18f4550.h>
void delay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
    {
        for (j = 0; j < 5000; j++)
            ;
    }
}
void main(void)
{
    TRISB = 0x00;
    LATB = 0xFF;

    while (1)
    {
        LATB = ~LATB;
        delay(1000);
    }
}