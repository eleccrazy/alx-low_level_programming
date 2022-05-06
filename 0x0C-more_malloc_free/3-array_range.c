#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: The minimum value range to be stored in the array.
 * @max: The maximum value range to be stored in thea array.
 *
 * Return: Returns NULL if min > max or if it fails to create
 * a memeory space, otherwise it returns a pointer to a newely
 * created array.
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int  i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, min++)
		array[i] = min;

	return (array);
}
