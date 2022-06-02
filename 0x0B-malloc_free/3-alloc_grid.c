#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - main entry for 2 dimensional array.
  * @width: initial size for rows.
  * @height: initial size for columns.
  * Return: Always (0) for succes.
  */

int **alloc_grid(int width, int height)
{
	int **p, a, b, size;
		if (width == 0 || height == 0)
		{
			return (NULL);
		}
	size = width * height + 1;
	p = malloc(sizeof(*p) * size + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < width; a++)
	{
		p[a] = malloc(sizeof(*p) * width + 1);
		if (p[a] == NULL)
		{
			for (a = 0; (a = '\0'); --a)
			{
				free(p[a]);
			}
			free(p);
			return (NULL);
		}
	}
	for (a = 0; a < width; a++)
	{
		for (b = 0; b < height; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);
}
