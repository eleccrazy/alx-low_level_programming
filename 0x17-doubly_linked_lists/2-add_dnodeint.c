#include "lists.h"

/**
 * add_dnodeint - Adds a new element at the begining of the list
 *
 * @head: A pointer that points to another pointer which inturn
 * points to the head of the list.
 *
 * @n: The element to be added
 *
 * Return: The address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (*head);
}
