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
	int size = 0;

	if (height == 0)
		return (NULL);
	if (width == 0)
		return (NULL);
	for (a = 0; a < width; a++)
	{
		for (b = 0; b < height; b++)
		{
			size++;
		}
	}

	p = malloc(sizeof(**p) * size + 1);
	if (!p)
		return (NULL);
	for (a = 0; a < width; a++)
	{
		p = malloc(sizeof(**p) * size + 1);
		for (a = 0; p[a]; a--)
		{
			if (!p[a])
				free(p[a]);
		}
		free(p);
		return (NULL);
	}
	for (a = 0; a < width; a++)
	{
		for (b = 0; b < height; b++)
		{
			p[a][b] = 0;
		}
	}
	p[size] = '\0';
	return (p);

}
