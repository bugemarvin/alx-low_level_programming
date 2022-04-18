#include "main.h"
/**
*print_numbers - Main entry point.
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
void print_numbers(void)
{
while (num < 9)
{
num = 0;
_putchar(num);
}
_putchar('\n');
return (0);
}
