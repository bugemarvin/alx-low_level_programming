#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main entry point for diagonals.
  * @a: array pointer.
  * @size: len of the array.
  *
  * Return: 0 or 1 Always succes.
  */

void print_diagsums(int *a, int size)
{
	int b;

	unsigned int tty;
	unsigned int tty1;

	tty = 0;
	tty1 = 0;

	for (b = 0; b < size; b++)
	{
		tty += a[(size * b) + b];
		tty1 += a[(size * (b + 1)) - (b + 1)];
	}
	printf("%d, %d\n", tty, tty1);
}
