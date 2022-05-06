#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 *
 * @ptr: A pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: new_size is the new size, in bytes of the new memory block
 *
 * Return: Returns NULL if new_size equals to zero and ptr is not null or
 * if it fails to create a memory space,
 * if new_size == old it returns a pointer to previously allocated memory.
 * otherwise it returns a pointer to the newely allocated memory space.
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	char *fill_mem, *p;
	unsigned int i;

	p = ptr;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		return (new_mem);
	}

	new_mem = malloc(new_size);

	if (new_mem == NULL)
		return (NULL);

	fill_mem = new_mem;

	for (i = 0; i < new_size && new_size <= old_size; i++)
		fill_mem[i] = p[i];

	free(ptr);

	return (new_mem);
}
