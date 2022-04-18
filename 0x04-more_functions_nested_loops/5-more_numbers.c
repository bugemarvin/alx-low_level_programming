#include "main.h"
/**
 * more_numbers - Main entry point
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
int c;
int b;
for (c = 0; c < 10; c++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
{
_putchar((b / 10) + 0);
}
_putchar((b % 10) + 48);
}
_putchar(10);
}
}
