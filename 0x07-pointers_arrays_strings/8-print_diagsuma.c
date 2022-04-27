#include "main.h"

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
	int sum = 0;
	int sum1 = 0;

	for (b = 0; b < size; b++)
	{
		sum += a[b];
		a += size;
	}

	a -= size;

	for (b = 0; b < size; b++)
	{
		sum1 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
