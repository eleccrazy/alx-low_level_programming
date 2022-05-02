#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees 2-D grid previously created by
 * alloc_grid function
 *
 * @grid: The grid to be freed
 * @height: The height of the grid to be freed
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
