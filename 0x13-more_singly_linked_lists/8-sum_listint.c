#include "lists.h"

/**
 * sum_listint - Computes the sum of all data in the list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: Returns 0 if the list is empty, otherwise it returns
 * the sum of all elements in the list.
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
