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
	char *ser;
	unsigned int len;

	len = strspn(s, accept)
	ser = strpbrk(s, accept);
	while (ser != len)
	{
	return (ser);
	ser++;
	}
	return (0);
}
