#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 *
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list.
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
