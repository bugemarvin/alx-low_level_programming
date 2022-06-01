#include "main.h"
#include <stdio.h>

/**
 * print_binary - function fo print binary.
 * @n: long int for binary representation.
 *
 * Return: Always 1.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
