#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * print_numbers - main function to print numbers.
  * @separator: symbol for separating the ints.
  * @n: total elements of the ints.
  *
  * Return: Always (0) for succes.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
		unsigned int a;
		int b = 0;
			va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(ap, int);
		printf("%d", b);

		if (a != (n - 1) && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
