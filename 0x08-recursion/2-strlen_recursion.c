#include "main.h"

/**
  * _strlen_recursion - main entry point.
  * @s: string to return lenth of a string.
  *
  * Return: Always (0) on succes.
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (strlen(s + 1));
}
