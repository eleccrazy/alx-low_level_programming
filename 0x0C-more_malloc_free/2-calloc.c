#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates a memory for an array.
 *
 * @nmemb: Number of elements in the array.
 * @size: The size of the array type to be allocated.
 *
 * Return: Returns NULL if nmemb or size is NULL, or if it fails to create
 * the memory space, otherwise it returns a pointer to the allocated memory.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new_mem;
	char *fill_mem;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_mem = malloc(nmemb * size);

	if (new_mem == NULL)
		return (NULL);

	fill_mem = new_mem;

	for (; i < nmemb * size; i++)
		fill_mem[i] = 0;

	return (new_mem);
}
