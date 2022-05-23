#include "lists.h"

/**
 * free_listint2 - Frees a linked list and assigns the
 * head pointer with NULL.
 *
 * @head: A pointer that points to a pointer which inturn
 * points to the head of the list.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;

		free(*head);
		*head = temp;
	}

	*head = NULL;
}
