#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function computes and returns a pointer
 * to the two dimensional array of elements.
 *
 * @width: number of colomons of the 2-D array
 * @height: number of rows of the 2-D array
 *
 * Return: returns NULL if width or height of the 2-D array is
 * negartive / 0 or if it fails to create a memory location,
 * otherwise it returns a pointer to a 2-D array of integers.
 *
 */

int **alloc_grid(int width, int height)
{
	int **twoD_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD_array = malloc(sizeof(int *) * height);

	if (twoD_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twoD_array[i] = malloc(sizeof(int) * width);

		if (twoD_array[i] == NULL)
		{
			for (i -= 1; i >= 0; i--)
				free(twoD_array[i]);

			free(twoD_array);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			twoD_array[i][j] = 0;
	}
	return (twoD_array);
}
