#include "main.h"

/**
  * set_bit - function to set bit to 1 for an index.
  * @n: null pointer to store number.
  * @index: for bit adjustment.
  *
  *		mem set is 8.
  *
  * Return: Always 1 on succes
  *	-1 for failuer.
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mem_check, mem_adjuster;

	mem_check = sizeof(unsigned long int) * 8 - 1;

	if (index >= mem_check)
	{
		return (-1);
	}

	mem_adjuster = 1 << index;
	if (n != NULL)
	{
		*n = *n | mem_adjuster;
	}
	return (1);
}
