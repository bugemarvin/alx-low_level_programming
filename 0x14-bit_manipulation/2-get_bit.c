#include "main.h"

/**
  * get_bit - main function a bit for and index.
  * @n: memory for the bit.
  * @index: contents for the index.
  *
  *	memory size of 8 for the bits.
  *
  * Return: Always 1 on sucess.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mem_check, comparisor;

	mem_check = sizeof(unsigned long int) * 8 - 1;

	if (index >= mem_check)
	{
		return (-1);
	}

	comparisor = 1 << index;

	if ((n & comparisor) == 0)
	{
		return (0);
	}
	return (1);
}
