#include "main.h"

/**
  * factorial - main point of entry.
  * @n: number to be factored recursively.
  *
  * Return: Always (0) on sucess.
  */

int factorial(int n)
{
	if (!(n >= 0))
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
