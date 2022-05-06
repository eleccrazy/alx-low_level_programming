#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc.
 *
 * @b: Number of elements to be allocated for a
 * specific type.
 *
 * Return: Returns a pointer to the allocated memeory.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);

	if (new_mem == NULL)
		exit(98);

	return (new_mem);
}
