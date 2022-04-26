#include "main.h"

/**
  * _strpbrk - main entry point for search.
  * @s: first occurrence in a str.
  * @accept: bytes of string.
  *
  * Return: 0 or 1 always succes
  */

char *_strpbrk(char *s, char *accept)
{
	unsigned int *ser;

	ser = strpbrk(s, accept);
	if (ser != '\0')
	{
	return (ser);
	}
	return (0);
}
