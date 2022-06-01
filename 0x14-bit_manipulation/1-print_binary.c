#include "main.h"
#include <stdio.h>

/**
  * bin_check - main function to print binary recusively.
  * @a: variable for the check.
  *
  * Return: Always 1.
  */

void bin_check(int a)
{
	if (a > 1)
		bin_check(a >> 1);

	_putchar((a & 1) + 48);
}

/**
  * print_binary - function fo print binary.
  * @n: long int for binary representation.
  *
  * Return: Always 1.
  */

void print_binary(unsigned long int n)
{
	bin_check(n);
}
