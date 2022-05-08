#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid -main entry to free 2d grid.
  * @grid: 2d grid for mem free.
  * @height: height to be freed.
  *
  * Return: Always (0) for succes.
  */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; ++a)
	{
		if (grid[a] != NULL)
			free(grid[a]);
	}

	free(grid);
}
