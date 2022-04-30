#include "main.h"

/**
  * set_string - main entry point.
  * @s: first point of the char.
  * @to: second pointer of the char.
  *
  * Return: Always (0) succes.
  */

void set_string(char **s, char *to)
{
	*s = to;

	if (*s)
	_putchar(*s);
}
