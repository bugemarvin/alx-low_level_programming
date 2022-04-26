#include "main.h"

/**
  * _memset - main entry point.
  * @s: first string is a pointer.
  * @b: second string as a constant.
  * @n: prints the number of bytes.
  *
  * Return: 0 or 1 always succes.
  */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s + 0, b, n);
	return (s);
}
