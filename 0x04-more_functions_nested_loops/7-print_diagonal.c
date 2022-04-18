#include "main.h"

/**
 * print_diagonal - main entry point
 * @n: print a number.
 * Return: 0 or 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
{
_putchar('\\');
}
else if (j < i)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
}
