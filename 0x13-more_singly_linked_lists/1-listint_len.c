#include "lists.h"

/**
 * listint_len - Computes the length of the list
 *
 * @h: A pointer to the head of the list.a
 *
 * Return: Returns the number of nodes in the list.
 *
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
