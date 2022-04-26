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
	unsigned int a;

	a = c - '0';

	strchr(s, a);
	return (s);
}
