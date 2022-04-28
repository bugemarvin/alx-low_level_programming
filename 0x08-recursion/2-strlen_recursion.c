#include "main.h"

/**
  * _strlen_recursion - main entry point.
  * @s: string to return lenth of a string.
  *
  * Return: Always (0) on succes.
  */

int _strlen_recursion(char *s)
{
	char *p = s;
	char *rev = strlen(p);
	if (*rev != '\0')
	{
		strlen_recursion(p);
		_putchar(*p);
	}
}
