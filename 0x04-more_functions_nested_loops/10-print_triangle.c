#include "main.h"
/**
 * print_triangle - Main entry point
 * Return: 0 or 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
int a;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
if (b >= (size + a))
{
    _putchar(' ');
}
else
{
_putchar('#');
}
}
}
}
_putchar('\n');
}