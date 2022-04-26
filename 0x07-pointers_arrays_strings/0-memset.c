#include "main.h"

/**
  * _memset - main entry point.
  * @s: first string is a pointer.
  * @b: second string as a constant.
  * @n: prints the number of bytes.
  *
  * Returns: 0 or 1 always succes.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for  (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
