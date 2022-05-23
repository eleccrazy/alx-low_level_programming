#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 *
 * @head: A pointer that points to a pointer which in
 * turn points the head of the list.
 *
 * Return: A pointer to the first node of the list.
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
