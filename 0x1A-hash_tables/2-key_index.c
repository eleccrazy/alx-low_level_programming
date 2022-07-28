#include "hash_tables.h"

/**
 * key_index - Gives the index of the key.
 *
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored in
 * the array of the hash table
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
