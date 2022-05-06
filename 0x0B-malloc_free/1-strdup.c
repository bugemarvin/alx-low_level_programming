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
	if (str == NULL)
	{
		return (NULL);
	}
	
	return (str);
}
