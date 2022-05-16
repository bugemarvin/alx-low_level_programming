#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - as the main print function.
  * @name: As the name to be printed.
  * @f: pointer to a function.
  *
  * Return: Always (0) for succes.
  */

void print_name(char *name, void (*f)(char *))
{
	if (*name)
		f(name);
}
