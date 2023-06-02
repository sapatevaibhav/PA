#include <xc.h>
#include <pic18f4550.h>
void main(void)
{
    int a = 10;
    int b = 20;
    int c = a + b;

    TRISD = 0;
    PORTD = c;
}