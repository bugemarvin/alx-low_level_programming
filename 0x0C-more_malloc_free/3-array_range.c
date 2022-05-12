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
	int *pntr;
	int size, arry_index;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	pntr = malloc(sizeof(*pntr) * size);

	if (pntr == NULL)
	{
		return (NULL);
	}

	for (arry_index = 0; arry_index < size; arry_index++)
	{
		pntr[arry_index] = min++;
	}

	return (pntr);
}
