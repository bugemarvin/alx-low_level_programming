#include "main.h"

/**
 * print_line - Main entry point
 *@n: print out the number
 * Return: 0 or 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
int a;
for (a = 0; a < n; a++)
{
putchar('_');
}
putchar('\n');
}
