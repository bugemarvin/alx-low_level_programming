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
	char *p = (char *)malloc(size * sizeof(char));
	int a;

	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}

	if (size > 0)
	{
		return (p);
	}
	else
	{
		return (NULL);
	}
}