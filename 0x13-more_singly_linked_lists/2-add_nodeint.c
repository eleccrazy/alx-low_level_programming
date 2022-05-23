#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of the list.
 *
 * @head: A pointer that holds the address of a pointer
 * to the head of the head of the linked list listint_t.
 * @n: The element to be added.
 *
 * Return: It returns NULL if it fails to create a memory
 * space, otherwise it returns a pointe to the head of the list.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
