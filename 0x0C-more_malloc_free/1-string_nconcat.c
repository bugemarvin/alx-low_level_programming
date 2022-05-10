#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
  * string_nconcat - main that concatenates two strings.
  * @s1:
  * @s2:
  * @n:
  *
  * Return: Always (NULL) if function fails and also treated as
  * empty string.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, size = n = 0;
	char *p;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a =0; s1[a] != '\0'; a++)
	{
		size++;
	}
	if (s2 != NULL)
	{
	for (b = 0; s2[b] != '\0'; b++)
	{
		size++;
	}
	}
	else
		exit(98);
	p = malloc(n * size);
	if ( p == NULL)
	{
		return (NULL);
	}
	memcpy(p, s1, a);
	memcpy(p + a, s2, b);
	return (p);
}
