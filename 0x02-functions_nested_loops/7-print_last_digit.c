#include "main.h"
/**
*print_last_digit - as functions entry
*@n: the character to print
*Return: 0 or 1 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
