#include "main.h"

/**
  * print_array - main entry point.
  * @a: declared pointer.
  * @n: element of an array lengths.
  */

void print_array(int *a, int n)
{
	int b;

		for (b = 0; b < n; b++)
		{
			printf("%d", a[b]);
			if (b < n - 1)
			{
				printf(", ");
			}
		}
		printf("\n");
}
