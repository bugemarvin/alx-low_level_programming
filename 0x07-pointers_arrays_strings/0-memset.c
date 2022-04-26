#include "main.h"

/**
  * _memset - main entry point.
  * @s: first string is a pointer.
  * @b: second string.
  * @n: prints a number.
  *
  * Returns: s always succes.
  */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s + 0, b, n);
	return(s);
}
