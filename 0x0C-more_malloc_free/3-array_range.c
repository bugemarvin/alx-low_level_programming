#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - main entry for arry of ints.
  * @min: lowest value of the array.
  * @max: highest value ot the array.
  *
  * Return: Nothing.
  */

int *array_range(int min, int max)
{
	void *pntr;
	int size = 0, arry_index, *arry;
	

	size = min * max;

	if (min > max)
	{
		return (NULL);
	}

	pntr = malloc(size);

	if (pntr == NULL)
	{
		return (NULL);
	}

	arry = pntr;

	for (arry_index = 0; arry_index < size; arry_index++)
	{
		arry[arry_index] = '\0';
	}

	return (pntr);
}
