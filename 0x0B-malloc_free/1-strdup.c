#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * *_strdup(char *str) - main entry allocated space memory.
  * @str: pointer for a new space of memory.
  *
  * Returns: Always (0) on succes.
  * Returns: NULL if empty as well as insufficent memory.
  */

char *_strdup(char *str)
{
	int a;
	char *str2;
	int size = 10;

	if (str == NULL)
	{
		return (NULL);
	}

	str2 = (char *)malloc(size * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		if (size > 0)
		{
			str2[a] = str[a];
		}
	}

	return (str2);
}
