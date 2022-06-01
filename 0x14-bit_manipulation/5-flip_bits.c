#include "main.h"

/**
  * flip_bits - main function for bits to flip to move from number to number.
  * @n: first number of bits.
  * @m: second number of bits.
  *
  * Return: Always 1 for succes
  *		-1 on failure.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mem_bits, comparison;

	mem_bits = 0;
	comparison = n ^ m;

	while (comparison != 0)
	{
		mem_bits = mem_bits + (comparison & 1);
		comparison >>= 1;
	}

	return (mem_bits);
}
