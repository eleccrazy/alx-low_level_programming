#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: The array to be searched.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare
 * values.
 *
 * Return: It returns -1 if no element matches or if size <= -1,
 * otherwise it returns the index of the first element for which
 * the cmp function does not return 0.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
