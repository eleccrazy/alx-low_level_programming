#include "lists.h"

/**
 * sum_dlistint - Sums all the elements in the dlistint_t linked list
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of the elements.
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
