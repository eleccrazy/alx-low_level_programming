#include "lists.h"

/**
 * get_nodeint_at_index - This function traverses through the linked list
 * and gets the ntn node of the listint_t linked list.
 *
 * @head: A pointer to the head of the list.
 * @index: The index at which the node to be returned.
 *
 * Return: It returns NULL if the node does not exist, otherwise it returns
 * the nth node of a listint_t linked list.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;

	if (head == NULL)
		return (NULL);

	traverse = head;

	while (index != 0)
	{
		if (!traverse)
			return (NULL);

		traverse = traverse->next;
		index--;
	}

	return (traverse);
}
