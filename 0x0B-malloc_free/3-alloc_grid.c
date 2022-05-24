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
	int **p, a, b;
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	p = malloc(height * width + 1);
	for (a = 0; a < width; a++)
	{
		p[a] = malloc(sizeof(*p) * width);
		if (p[a] == NULL)
		{
			free(p[a]);
		}
	}
	if (p == NULL)
	{
		return (NULL);
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
