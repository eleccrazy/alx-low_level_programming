#include "hash_tables.h"
#include <string.h>
#define SUCCESS 1
#define FAILURE 0

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_create - Creates a sorted hash table.
 *
 * @size: The size of the array.
 *
 * Return: If something went wrong it returns NULL, otherwise it
 * returns a pointer to the newely created sorted hash table.
 *
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));
	unsigned long int index = 0;

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
		return (NULL);

	for (; index < size; index++)
		new_table->array[index] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table. In case of
 * collision, it will add an element at the beginning of
 * the list.
 *
 * @ht: The sorted hash table you want to add or update the key/value to
 * @key: The key, and cannot be empty string.
 * @value: The value associated with the key, and can be empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise
 *
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *traverse;
	unsigned long int i;
	char *copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (FAILURE);

	i = key_index((const unsigned char *)key, ht->size);
	traverse = ht->shead;
	while (traverse != NULL)
	{
		if (strcmp(traverse->key, key) == 0)
		{
			free(traverse->value);
			traverse->value = copy;
			return (SUCCESS);
		}
		traverse = traverse->snext;
	}
	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
	{
		free(copy);
		return (FAILURE);
	}
	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(copy);
		free(new_node);
		return (0);
	}
	new_node->value = copy;
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		traverse = ht->shead;
		while (traverse->snext != NULL && strcmp(traverse->snext->key, key) < 0)
			traverse = traverse->snext;
		new_node->sprev = traverse;
		new_node->snext = traverse->snext;
		if (traverse->snext == NULL)
			ht->stail = new_node;
		else
			traverse->snext->sprev = new_node;
		traverse->snext = new_node;
	}

	return (SUCCESS);
}

/**
 * shash_table_get - Retrives a value associated with the key.
 *
 * @ht: The sorted hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: It returns NULL if key couldn’t be found, otherwise
 * the value associated with the element.
 *
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	if (node == NULL)
		return (NULL);
	return (node->value);
}

/**
 * shash_table_print - Prints a sorted hash table.
 *
 * @ht: The sorted hash table.
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 *
 * @ht: The sorted hash table.
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table.
 *
 * @ht: The sorted hash table.
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
