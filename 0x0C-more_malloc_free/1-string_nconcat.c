#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * *string_nconcat - main entry that concatenates two strings.
 * @s1: first pointer for the string.
 * @s2: Second pointer for the string
 * @n: the number for the string.
 *
 * Return: Always (NULL) if function fails and also treated as empty string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int combo, size;
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	void *p;
	char *creator;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
		exit(98);
	}

	size = size1 + size2 + 1;
	p = malloc(size);

	creator = p;
	if (p == NULL)
	{
		p = "";
		exit(98);
	}
	for (combo = 0; combo < size1; combo++)
	{
		creator[combo] = s1[combo];
	}
	for (combo = 0; combo < size2; combo++)
	{
		creator[size1 + combo] = s2[combo];
	}

	if (strtol(s2, NULL, 10) <= n)
	{
		size = ++size2;
	}
	creator[size] = '\0';
	return (p);
}
