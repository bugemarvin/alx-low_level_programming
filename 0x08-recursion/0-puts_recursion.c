#include "main.h"

/**
 * _puts_recursion - main point of entry.
 * @s: prints a string.
 *
 * Return: Always (0) on succes.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		puts(s);
		_putchar('\n');
	}
	return (_puts_recursion);
}

