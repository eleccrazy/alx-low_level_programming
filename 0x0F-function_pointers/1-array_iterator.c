#include "function_pointers.h"

/**
 * array_iterator - Executes a function as a parameter on each
 * element of the array.
 *
 * @array: The array which contains the elements.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
