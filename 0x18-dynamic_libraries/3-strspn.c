#include "main.h"

/**
  * _strspn - main entry point for len substring.
  * @s: first pointer of the string
  * @accept: second pointer for the bytes.
  *
  * Return: 0 or 1 Alwyas succes.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int strsub;

	strsub = strspn(s, accept);
	return (strsub);
}
