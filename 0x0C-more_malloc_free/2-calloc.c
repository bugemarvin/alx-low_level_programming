#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - main entry for allocating mem to array in C.
  * @nmemb: member of the array.
  * @size: size of the array.
  *
  * Return: Always (NULL) malloc  fails, (0) for succes)
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	void *p = &nmemb;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (a = 0; a != '\0'; a++)
	{
		size++;
	}

	p = malloc(sizeof(p) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}
