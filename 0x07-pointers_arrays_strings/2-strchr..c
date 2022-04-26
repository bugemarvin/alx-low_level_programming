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
	unsigned int *a;
	unsigned int *ser;
	unsigned int b;

	a = c - '0';
	ser = s + s[a];

	for ( a = s; a < ser; a++)
	{
		if ( a == b)
		{
			return (a);
		}
	}
	return (0);
}
