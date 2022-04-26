#include "main.h"
#include <stdio.h>

/**
  * _strchr - main entry point.
  * @s: first string is a pointer.
  * @c: second string.
  *
  * Return: 0 or 1 always on succes.
  */

char *_strchr(char *s, char c)
{
	char *ser;

	ser = strchr(s, c);
	if (ser != NULL)
	{
		putchar(s);
	}
	return (0);
}
