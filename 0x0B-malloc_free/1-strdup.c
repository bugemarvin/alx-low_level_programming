#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * _strdup(char *str) - main entry allocated space memory.
  * @str: pointer for a new space of memory.
  *
  * Returns: Always (0) on succes.
  */

char *_strdup(char *str)
{
	int a;
	char *p;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		size++;
	}

	p = (char *)malloc((size + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
		p[a] = str[a];
	}
	
	p[size] = '\0';
	return (p);
}
