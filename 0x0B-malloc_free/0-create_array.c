#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * create_array - main entry for chars stdout in malloc.
  * @size: size of memory allocation for array.
  * @c: string of an array.
  *
  * Return: Always (0) for succes.
  */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	if (size == 0)
	{
		return NULL;
	}

	if (p = (char *)malloc(size * sizeof(char)) == NULL)
	{
		return NULL;
	}

	p = (char *)malloc(size * sizeof(char));
	for (a = 0; a < size; a++)
	{
		if (size > 0)
		{
			p[a] = c;
		}
	}

	return (p);
}
