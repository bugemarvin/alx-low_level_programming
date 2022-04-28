#include "main.h"

/**
  * _pow_recursion - main point of entry.
  * @x: vaule of the first integer
  * @y: power to be multiplied with.
  *
  * Return: Always (0) on succes.
  */

int _pow_recursion(int x, int y)
{
	int total = x;

	if (!(y >= 0))
	{
		return (-1);
	}
	if (y == 0)
	{
		return (0);
	}
	else
	{
		return (total *= _pow_recursion(x, (y - 1)));
	}
}
