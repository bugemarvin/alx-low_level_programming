#include "main.h"

int _psqr(int a, int b);

/**
 * _sqrt_recursion - main entry point.
 * @n: for finding natural squares*
 *
 * Return: Always (0) on succes.
 */

int _sqrt_recursion(int n)
{
	return (_psqr(n, 1));
}

/**
  * _psqr - main entry calculating square.
  * @a: calulates perfect square.
  * @b: calculates sides of a square.
  *
  * Return: Always (0) on succes.
  */


int _psqr(int a, int b)
{
	int root = b * b;

	if (root == a)
	{
		return (b);
	}
	if (!(root < a))
	{
		return (-1);
	}
	return (_psqr(a, b + 1));
}
