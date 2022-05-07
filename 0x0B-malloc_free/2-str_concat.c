#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * str_concat - concatinate 2 strings.
 * @s1: first string pointer for combination.
 * @s2: second string pointer for concat.
 *
 * Return: Always (0) on success && NULL on failuer.
 */


char *str_concat(char *s1, char *s2)
{
	int a = strlen(s1);
	int b = strlen(s2);
	char *p;

	p = (char *)malloc((a + b + 1) * sizeof(char));

	if (s1 != NULL || s2 != NULL)
	{
		memcpy(p, s1, a);
		memcpy(p + a, s2, b);
	}

	if (s1 != NULL && s2 == NULL)
	{
		memcpy(p, s1, a);	
	}

	if (s1 == NULL && s2 != NULL)
	{
		memcpy(p, s2, b);
	}

	p[a + b] = '\0';
	return (p);
}
