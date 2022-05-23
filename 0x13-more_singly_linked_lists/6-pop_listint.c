#include "lists.h"

/**
 * pop_listint - Deletes the head node of the listint_t
 *
 * @head: A pointer that points to a pointer which in turn points
 * to the head of the list.
 *
 * Return: It returns 0 if the linked list is empty, otherwise it
 * returns the head node's data (n).
 *
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *deleted;

	if (*head == NULL)
		return (0);

	deleted = *head;
	data = deleted->n;

	*head = (*head)->next;
	free(deleted);
	deleted = NULL;

	return (data);

}
