#include "main.h"

/**
  * _strchr - main entry point.
  * @s: first string is a pointer.
  * @c: second string.
  *
  * Return: 0 or 1 always on succes.
  */

char *_strchr(char *s, char c)
{
	if (!(s = NULL))
	{
		strchr(s, c);
		return (s);
	}
	return (0);
}
