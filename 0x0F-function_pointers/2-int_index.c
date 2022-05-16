#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - as function for searching a integer.
  * @array: point for the array.
  * @size: size of the no elements of array.
  * @cmp: function of an array.
  *
  * Return: Always (0) for succes.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
		if (size <= 0)
		{
			return (0);
		}
		if (array != NULL && cmp != NULL)
		{
			for (a = 0; a < size; a++)
			{
				cmp(array[a]);
				if (cmp(array[a]) > 0)
					return (a);
			}
		}
		return (-1);
}
