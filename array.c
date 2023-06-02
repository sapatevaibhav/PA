#include <xc.h>
#include <pic18f4550.h>
void main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0, i = 0;
    for (i; i < 9; i++)
    {
        sum = sum + a[i];
    }
    TRISD = 0;
    PORTD = sum;
}
/*
int sum;
sum = 0;
sum = 0x0A + 0x02;
TRISD = 0;
PORTD = 100;
*/