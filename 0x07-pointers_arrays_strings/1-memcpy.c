#include "main.h"

/**
  * _memcpy - main entry point for copy.
  * @dest: the first string of a pointer.
  * @src: the second string of a pointer.
  * @n: number of bytes for the memory.
  *
  * Return: 0 or 1 Always on succes.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest + 0, src, n);
	return (dest);
}
