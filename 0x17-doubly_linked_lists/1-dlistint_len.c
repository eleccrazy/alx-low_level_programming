#include "lists.h"

/**
 * dlistint_len - Computes the length of a dlistint list.
 *
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
