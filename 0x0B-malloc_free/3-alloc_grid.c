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
	for (a = 0; a > 0 && a <= width; a++)
	{
		for (b = 0; b > 0 && b <= height; b++)
		{
			size++;
		}
	}
	p = (int **)malloc((size + 1) * sizeof(int *));
	if ((p == NULL) || (size == 0))
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (a = 0; a < width; ++a)
	{
		p[a] = (int *)malloc((size + 1) * sizeof(int *));
		if (p[a] == NULL)
		{
			for (a = 0; !(a > width); ++a)
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
			p[a][b] = 0;
	}
	return (p);
}
