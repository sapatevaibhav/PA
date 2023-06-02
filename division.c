#include <xc.h>
#include <pic18f4550.h>
void main(void)
{
    int a, b, div;
    a = 19;
    b = 2;
    div = 0;

    while (a >= b)
    {
        a -= b;
        div++;
    }
    TRISC = 0;
    PORTC = div; // quotient
    TRISD = 0;
    PORTD = a; // remainder
}