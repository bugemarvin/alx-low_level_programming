#include "main.h"

/**
 * print_triangle - Main entry point.
 * @size: this is the size of the trinangle.
 * Return: 0 or 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int a;
int b;
for (a = 1; a <= size; a++)
{
for (b = a; b < size; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
