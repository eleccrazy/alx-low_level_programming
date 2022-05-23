#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at specified index.
 *
 * @head: A pointer that points to a pointer which in turn points to
 * the head of the listint_t linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The element to be added.
 *
 * Return: It returns NULL if it fails to create a memory or if it is not
 * possible to add a new node at specified index, otherwise it returns the
 * address of the new node.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *traverse, *prev_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		traverse = *head;

		while (idx != 0)
		{
			prev_node = traverse;
			if (!traverse)
				return (NULL);
			traverse = traverse->next;
			idx--;
		}
		new_node->next = traverse;
		prev_node->next = new_node;
	}

	return (new_node);
}
