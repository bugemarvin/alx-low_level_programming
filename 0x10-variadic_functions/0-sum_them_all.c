#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * sum_them_all - main variadic call function.
  * @n: as the count number.
  *
  * Return: Always (0) for succes.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
		unsigned int i, calc = 0;
			va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		calc += va_arg(ap, int);
	}
	va_end(ap);
	return (calc);
}
