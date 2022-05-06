#include "main.h"

/**
 * str_concat - concatinate 2 strings.
 * @s1: first string pointer for combination.
 * @s2: second string pointer for concat.
 *
 * Return: Always (0) on success.
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int size = 0;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		size++;
	}

	s1 = (char *)malloc((size + 1) * sizeof(char));

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		strcat(s1, s2);
	}

	s1[size] = '\0';
	return (s1);
}
