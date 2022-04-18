#include "main.h"
/**
 * print_square - Main entry point
 * @size: prints the size of a square
 * Return: 0 or 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
int a;
int c;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (c = 0; c < size; c++)
{
putchar(35);
}
putchar(10);
}
}
else
{
putchar(10);
}
