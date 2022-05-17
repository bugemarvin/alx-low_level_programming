#include "variadic_functions.h"
#include <sdtarg.h>
#include <stdio.h>

/**
  *
  *
  *
  *
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
		va_start(ap , separator);
			int a;

	if (separator == NULL)
	{
		continue;
	}
	for (a = 0; a < n; a++)
	{
		
}
