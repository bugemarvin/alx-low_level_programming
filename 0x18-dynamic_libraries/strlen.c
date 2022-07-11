#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: String
 *
 * Return: Returns the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
