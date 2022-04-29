#include "main.h"

/*
*	Declaring a prototype.
*/

int _primes(int a, int b);
/**
  * is_prime_number -main enty for recusion.
  * @n: as the number.
  *
  * Return: Always (0) on succes.
  */

int is_prime_number(int n)
{
	return (_primes(n, 1));
}

/**
  * _primes - main entry to cal prime no's.
  * @a: fist integer.
  * @b: second int.
  *
  * Return: Always (0) on succes.
  */

int _primes(int a, int b)
{
	if (a <= 1)
	{
		return (0);
	}
	if (a % b == 0 && b > 1)
	{
		return (0);
	}
	if ((a / b) < b)
	{
		return (1);
	}
	return (_primes(a, b + 1));
}
