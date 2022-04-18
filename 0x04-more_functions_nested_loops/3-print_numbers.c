#include "main.h"
/**
*print_numbers - Main entry point.
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
void print_numbers(void)
{
int number;
for (number = 48; number < 58; number++)
{
putchar(number);
}
putchar('\n');
}
