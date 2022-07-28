#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: It returns NULL if key couldn’t be found, otherwise
 * the value associated with the element.
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);

	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node->value);
}
