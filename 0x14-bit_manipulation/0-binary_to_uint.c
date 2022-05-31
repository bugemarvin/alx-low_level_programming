#include "main.h"

/**
  * binary_to_uint - main function to return an int from binary.
  * @b: function pointer for the int.
  *
  * Return: always 1.
  */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int temp = 0;
		if (!b)
		{
			return (0);
		}
	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
	}
	for (a = 0; b[a]; a++)
	{
		temp <<= 1;
		if (b[a] == '1')
		{
			temp += 1;
		}
	}
	return (temp);
}
