#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t
 *
 * @h: A pointer to the head of the list.
 *
 * Return: Returns the number of nodes.
 *
 */

size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
