#include "lists.h"

/*
 * Desc: This code is written to detect any loop in the linked list, and if
 * there is a loop, it will findout where the loop starts.
 *
 * A loop in a linked list is a condition that occurs when the linked
 * list does not have any end. When the loop exists in the linked list,
 * the last pointer does not point to the Null.
 *
 * Thre are some algorithms used to detect looped lists. I used the
 * Floyd's Cycle Detection Algorithm. This approach uses the fast pointer
 * and the slow pointer to determine if there exists a cycle in the loop.
 * The slow pointer moves one node ahead at a time, and the fast pointer
 * moves two node ahead at a time. If the loop exists in the list, the fast
 * and slow pointers are bound to meet at some point.
 *
 * Author: Gizachew Bayness (eleccrazy).
 *
 * Date Created: May 24, 2022
 *
 */

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
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head->next;
	fast = head->next->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (fast);
		}

		slow = slow->next;
		fast = fast->next->next;
	}

	return (NULL);
}
