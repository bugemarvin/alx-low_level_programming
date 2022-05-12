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
	unsigned int a, b, size, size1, size2 = n;
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
		size = size1++;
	for (b = 0; s2[b] != '\0'; b++)
		size = size2++;
	p = malloc(sizeof(*p) * size);
	if (p != NULL)
	{
		memcpy(p, s1, a);
		memcpy(p + a, s2, b);
	}
	if (size2 >= strtol(s2, NULL, 10))
	{
		size = b + 1;
	}
	if (p == NULL)
	{
		return (NULL);
		exit(98);
	}
	p[size] = '\0';
	return (p);
}
