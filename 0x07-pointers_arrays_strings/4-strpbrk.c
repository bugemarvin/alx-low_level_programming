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
	unsigned int ser;
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (ser = 0; s[ser] != '\0'; ser++)
	while (s[ser] != s[len])
	{
		return (s + 2);
	}
	return (0);
}
