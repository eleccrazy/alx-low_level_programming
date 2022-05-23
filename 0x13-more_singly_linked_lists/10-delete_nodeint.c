#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list.
 *
 * @head: A pointer that points a pointer which inturn points to the
 * head of a listint_t linked list.
 * @index: The index of the node that should be deleted, the index
 * starts from 0.
 *
 * Return: It returns 1 if it succed, otherwise it rturns -1.
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *traverse;

	if (*head == NULL)
		return (-1);

	traverse = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(traverse);
	}

	else
	{
		while (index > 1)
		{
			if (!traverse)
				return (-1);

			traverse = traverse->next;
			index--;
		}

		temp = traverse->next;
		traverse->next = temp->next;
		free(temp);
	}

	return (1);
}
