#include "lists.h"

/**
 * list_len - Counts the number of elements in a list.
 *
 * @h: The pointer to the head of the list.
 *
 * Return: The number of elements in a linked list.
 *
 */

size_t list_len(const list_t *h)
{
	size_t count_elements = 0;

	while (h != NULL)
	{
		count_elements++;
		h = h->next;
	}

	return (count_elements);
}
