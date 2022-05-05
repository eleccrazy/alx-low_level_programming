#include "main.h"
#include <stdlib.h>

/**
 * init_grid - Initializes a 2-D grid array with the
 * specified height and width value.
 *
 * @h: The height of the array to be initialized.
 * @w: The width of the array to be initialized.
 *
 * Return: Returns NUL if it fails to create the array,
 * otherwise it returns a pointer to the initialized 2-D array.
 *
 */

int **init_grid(int h, int w)
{
	int **grid_init;
	int index = 0;

	grid_init = malloc(sizeof(int *) * h);

	if (grid_init == NULL)
		return (NULL);

	while (index < h)
	{
		grid_init[index] = malloc(sizeof(int) * w);

		if (grid_init[index] == NULL)
		{
			index -= 1;
			while (index >= 0)
			{
				free(grid_init[index]);
				index--;
			}

			free(grid_init);
		}
		index++;
	}

	return (grid_init);
}

/**
 * alloc_grid - This stores a value on a 2-D grid array and
 * returns a pointer to the two dimensional array of elements.
 *
 * @width: number of colomons of the 2-D array
 * @height: number of rows of the 2-D array
 *
 * Return: returns NULL if width or height of the 2-D array is less
 * than 1, otherwise it returns a pointer to a 2-D array of integers.
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);

	grid = init_grid(height, width);

	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}
