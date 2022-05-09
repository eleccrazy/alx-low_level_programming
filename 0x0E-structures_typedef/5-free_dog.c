#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated by new dog created.
 *
 * @d: The new dog created.
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
