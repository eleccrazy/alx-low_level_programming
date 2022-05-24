#include "lists.h"

/**
 * find_listint_loop - Checks the existance of the loop in the list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: Returns NULL if there is no loop, otherwise it returns
 * the address of the node where the loop starts.
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (slow->next->next->next);
	}

	return (NULL);
}
