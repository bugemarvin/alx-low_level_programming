#include "main.h"

/**
  * clear_bit - main function to set to 0 for an index.
  * @n: Null pointer for bits.
  * @index: variable to add bits value.
  *
  * Return: Always 1 on succes
  *		-1 on failuer.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mem_check, mem_adjuster;

	mem_check = sizeof(unsigned long int) * 8 - 1;

	if (index > mem_check)
	{
		return (-1);
	}

	mem_adjuster = 1 << index;
	*n = *n & mem_adjuster;
	return (1);
}
