#include "lists.h"

/**
 * add_dnodeint_end - Adds a new element at the end of the list
 *
 * @head: A pointer that points to a pointer which inturn points to
 * the head of the list.
 * @n: The element to be added
 *
 * Return: The address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
