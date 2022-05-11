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
	int a, b;
	int size = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		size++;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		size++;
	}
	p = malloc(sizeof(*p) * size);
	if (p != NULL)
	{
		memcpy(p, s1, a);
		memcpy(p + a, s2, b);
	}
	else
	{
		exit(98);
	}
	if (n >= strtol(s2, NULL, 10))
	{
		size = b + 1;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	p[size] = '\0';
	return (p);
}
