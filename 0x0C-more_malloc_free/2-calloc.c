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
	void *pntr;
	char *content;
	unsigned int arry_index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pntr = malloc(size * nmemb);

	if (pntr == NULL)
		return (NULL);

	content = pntr;

	for (arry_index = 0; arry_index < (size * nmemb); arry_index++)
		content[arry_index] = '\0';

	return (pntr);
}
