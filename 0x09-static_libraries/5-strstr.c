#include "main.h"

/**
  * _strstr - main entry point to locate substirng.
  * @haystack: first occurrence of the substring.
  * @needle: this is the string.
  *
  * Return: 0 or 1 Always succes.
  */

char *_strstr(char *haystack, char *needle)
{
	if (haystack)
	{
		return (strstr(haystack, needle));
	}
	return ('\0');
}
