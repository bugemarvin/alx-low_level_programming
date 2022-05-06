#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * _strdup(char *str) - main entry allocated space memory.
  * @str: pointer for a new space of memory.
  *
  * Returns: Always (0) on succes.
  * Returns: -1 NULL if empty as well as insufficent memory.
  */

char *_strdup(char *str)
{
	int a;
	char *p;
	int size = 50;

	if (str == NULL)
	{
		return (NULL);
	}

	p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		if (size > 0)
		{
			p[a] = str[a];
		}
	}

	return (p);
}
