#include "main.h"
#include <stdlib.h>
#include <sysexits.h>

/**
  * malloc_checked - main entry for allocating malloc.
  * @b: int for casting malloc memory.
  *
  * Return: Always (0) for succes.
  */

void *malloc_checked(unsigned int b)
{
	unsigned int *p, a, size = 0;

	for (a = 0; a != '\0'; a++)
	{
		size++;
	}

	p = malloc(b * size);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
