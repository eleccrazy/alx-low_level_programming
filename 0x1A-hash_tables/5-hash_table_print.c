#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table.
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *traverse;
	unsigned long int i = 0, step = 1;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		traverse = ht->array[i];
		while (traverse)
		{
			if (step)
			{
				printf("'%s': '%s'", traverse->key, traverse->value);
				step = 0;
			}
			else
				printf(", '%s': '%s'", traverse->key, traverse->value);

			traverse = traverse->next;
		}
		i++;
	}

	printf("}\n");
}
