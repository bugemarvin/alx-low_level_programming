#include "main.h"
/**
*print_numbers - Main entry point.
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
void print_numbers(void)
{
for (numbers = 0; numbers <= 9; numbers++)
_putchar(numbers);
_putchar('\n');
return (0);
}
