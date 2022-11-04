#include "search_algos.h"

/**
 * liner_search - function to search values in an array of ints
 * @array: pointer of an array of elements
 * @size: the length of an array
 * @value: data of the array
 *
 * Return - Always 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		if (array[a] == value)
		{
			return (a);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		}
	}
	return (-1);
}
