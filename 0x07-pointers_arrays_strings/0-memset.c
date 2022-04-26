#include "main.h"

/**
  * _memset - main entry point.
  * @s: first string is a pointer.
  * @b: second string.
  * @n: prints a number.
  * 
  * Returns: s Always on succes.
  */

char *_memset(char *s, char b, unsigned int n)
{
	n = 0;

	while ( n < s[b])
	{
		s[b] = '\0';
		n++;
	}
	return (s)
}
