#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at the index.
 *
 * @h: A pointer to a pointer which inturn points to the head of the list
 * @idx: The index of the list where the new node should be added.
 * @n: The element to be added.
 *
 * Return: Null, if it fails to create a memory or if it is not possible to add
 * a new node at idx, otherwise it returns the address of the new node.
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *traverse, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	traverse = *h;

	for (; idx != 1; idx--)
	{
		traverse = traverse->next;
		if (traverse == NULL)
			return (NULL);
	}
	if (traverse->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = traverse;
	new_node->next = traverse->next;
	traverse->next->prev = new_node;
	traverse->next = new_node;
	return (new_node);

}
