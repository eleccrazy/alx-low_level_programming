#include "lists.h"

/**
 * get_dnodeint_at_index - Finds the nth node of a dlistint_t linked list.
 *
 * @head: A pointer to the head of the list.
 * @index: The index at which the element to be found
 *
 * Return: If the node does not exist it returns NULL, otherwise it
 * Returns the nth node of a dlistint_t linked list.
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}

	return (head);
}
