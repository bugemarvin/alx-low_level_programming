#include "main.h"
#include <stdio.h>

/**
  * bincheck - function to check binary recusively.
  * @a: points recusivly.
  *
  * Return: always 1.
  */

void bincheck(unsigned int a)
{
	if (a > 1)
	{
		bincheck(a >> 1);
	}
	printf("%u", a & 1);
}

/**
  * print_binary - function fo print binary.
  * @n: long int for binary representation.
  *
  * Return: Always 1.
  */

void print_binary(unsigned long int n)
{
	bincheck(n);
}
