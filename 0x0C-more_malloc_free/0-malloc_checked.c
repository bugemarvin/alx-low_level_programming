#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - main entry for allocating malloc.
  * @b: int for casting malloc memory.
  *
  * Return: Always (0) for succes.
  */

void *malloc_checked(unsigned int b)
{
	int a;
	unsigned int *p = &b;
	int size = 0;

	for (a = 0; p[a] != '\0'; a++)
	{
		size++;
	}

	p = malloc(size * sizeof *p);

	if (p == NULL)
	{
		exit (3);
	}
		return (p);
}
