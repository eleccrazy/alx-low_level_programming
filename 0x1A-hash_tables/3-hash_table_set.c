#include "hash_tables.h"
#include <string.h>

#define SUCCESS  1
#define FAILURE  0

/**
 * hash_table_set - Adds an element to the hash table. In case of collision,
 * it will add an element at the beginning of  the list.
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key, and cannot be empty string.
 * @value: The value associated with the key, and can be empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *traverse;
	unsigned long int i;
	char *copy;

	if (ht == NULL || key == NULL || *key == 0 || value == NULL)
		return (FAILURE);

	i =  key_index((const unsigned char *) key, ht->size);
	traverse = ht->array[i];

	while (traverse)
	{
		if (strcmp(traverse->key, key) == 0)
			break;
		traverse = traverse->next;
	}
	if (traverse == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (FAILURE);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
			return (FAILURE);
		new_node->value = strdup(value);
		if (new_node->value == NULL)
			return (FAILURE);
		new_node->next = ht->array[i];
		ht->array[i] = new_node;
	}
	else
	{
		copy = strdup(value);
		if (copy == NULL)
			return (FAILURE);
		free(traverse->value);
		traverse->value = copy;
	}
	return (SUCCESS);
}
