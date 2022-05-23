#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list.
 *
 * @head: A pointer that holds the address of a pointer to the
 * head of the list.
 * @n: The element to be added to the liked list
 *
 * Return: It returns NULL if it fails to create a memory, otherwise
 * it returns a pointer to the head of the list.
 *
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *traverse;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		traverse = *head;

		while (traverse->next != NULL)
			traverse = traverse->next;

		traverse->next = new_node;
	}

	return (*head);
}
