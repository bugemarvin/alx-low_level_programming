#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_strings - main function to print a str.
  * @separator: for separating line of a string.
  * @n: number of elements of the string.
  *
  * Return: Always (0); for succes.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
		unsigned int a;
		char *b;
			va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(ap, char *);
		if (*b)
		{
			printf("%s", b);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		if (b == NULL)
		{
			printf("(nil)");
		}
	}
	putchar('\n');
	va_end(ap);
}
