#include "lists.h"

/**
 * free_list - frees a list_t linked list.
 *
 * @head: A pointer to the head of the list.
 *
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
	{
		next_node = head->next;

		free(head->str);
		free(head);
		head = next_node;
	}
}
