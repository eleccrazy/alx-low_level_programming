#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table.
 *
 * @ht: The hash table.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *traverse, *temp;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		traverse = ht->array[i];
		while (traverse)
		{
			temp = traverse->next;
			free(traverse->key);
			free(traverse->value);
			free(traverse);
			traverse = temp;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
