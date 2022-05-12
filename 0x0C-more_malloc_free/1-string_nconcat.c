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
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = size1 + size2 + 1;
	p = malloc(sizeof(*p) * size);
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	for (combo = 0; combo < size1; combo++)
	{
		p[combo] = s1[combo];
	}
	for (combo = 0; combo < size2; combo++)
	{
		p[size1 + combo] = s2[combo];
	}

	if (n >= strtol(s2, NULL, 10))
	{
		size = ++size2;
	}
	p[size] = '\0';
	return (p);
}
