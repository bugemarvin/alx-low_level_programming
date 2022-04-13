#include "main.h"
/**
*print_sign - as functions entry
*@n: The character to print
*Return: 0 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
int print_sign(int n)
{
int test;
if (n > 0)
{
test = 1;
_putchar('+');
}
else if (n == 0)
{
test = 0;
_putchar('0');
}
else
{
test = -1;
_putchar('-');
}
return (test);
}
