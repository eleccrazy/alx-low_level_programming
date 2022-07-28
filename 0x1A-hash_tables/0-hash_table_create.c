#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: The size of the array.
 *
 * Return: If something went wrong it returns NULL, otherwise it
 * returns a pointer to the newely created hash table.
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int index = 0;

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
		return (NULL);

	for (; index < size; index++)
		new_table->array[index] = NULL;

	return (new_table);
}
