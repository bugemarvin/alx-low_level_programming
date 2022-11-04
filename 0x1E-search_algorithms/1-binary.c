#include "search_algos.h"

/**
 * binary_search - function that sort and searches an array.
 *
 * @array: porinter for an array.
 * @size: lentgh of the array.
 * @value: value in the array.
 *
 * Return: Always (-1) if value is not in the array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t a, b, c;
	size_t l = 0, r = size - 1;

	if (array == NULL || value == 0)
	{
		return (-1);
	}

	for (a = l; a < r; a++)
	{
		if (r >= l)
		{
			printf("Searching in array: ");
			for (c = l; c < r; c++)
				printf("%d, ", array[c]);
			printf("%d\n", array[c]);

			b = ((l + r) / 2);
			if (array[b] == value)
			{
				return (b);
			}
			else if (array[b] > value)
			{
				r = b - 1;
			}
			else
			{
				l = b + 1;
			}
		}
	}
	return (r - 1 );
}
