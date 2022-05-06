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

	if (str == NULL)
	{
		return (NULL);
	}

	str2 = (char *)malloc(*(str - 1) * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < '\0'; a++)
	{
			str2[a] = str[a];
	}

	return (str2);
}
