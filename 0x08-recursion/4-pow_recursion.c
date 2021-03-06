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
	if (!(y >= 0))
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *= _pow_recursion(x, y - 1));
	}
}
