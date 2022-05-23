#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements from a singly linked list.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;

		h = h->next;
	}

	return (nodes);
}
