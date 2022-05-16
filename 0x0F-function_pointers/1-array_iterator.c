#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - As the function for the array
  * @array: pointer of the array.
  * @size: size of the array.
  * @action: function of the array.
  *
  * Return: Always (0) for succes.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;
		if (array != NULL && action != NULL)
		{
			for (a = 0; a  < size; a++)
			{
				action(array[a]);
			}
		}
}
