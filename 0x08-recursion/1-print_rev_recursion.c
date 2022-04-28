#include "main.h"

/**
  * _print_rev_recursion - main entry point.
  * @s: pointer string to be reversed.
  *
  * Return: Always (0) on succes.
  */

void _print_rev_recursion(char *s)
{
	char *p = s;
	if (*p != '\0')
	{
		_print_rev_recursion(p + 1);
		_putchar(*p);
	}
}
