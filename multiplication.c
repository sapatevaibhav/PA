#include <xc.h>
#include <pic18f4550.h>
void main(void)
{
    int a, b, multi;
    a = 5;
    b = 8;
    multi = 0;
    for (int i = 0; i < a; i++)
    {
        multi += b;
    }
    TRISD = 0;
    PORTD = multi;
}