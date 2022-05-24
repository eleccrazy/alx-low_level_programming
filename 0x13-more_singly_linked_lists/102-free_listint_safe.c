#include "lists.h"
#include <stdio.h>

/*
 * Desc: This code is written to detect any loop in the linked list, to
 * count unique nodes in a list, and to delete the entire linked list.
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
 * count_nodes_with_loop - Counts all unique nodes in the list.
 *
 * @slow: A pointer that moves one node ahead a time.
 * @fast: A pointer that moves two node ahead a time.
 *
 * Return: Returns numbe of unique nodes with in the loop.
 *
 */

size_t count_nodes_with_loop(const listint_t *slow, const listint_t *fast)
{
	size_t nodes = 1;

	while (fast != slow)
	{
		nodes++;
		slow = slow->next;
		fast = fast->next;
	}

	slow = slow->next;

	while (fast != slow)
	{
		nodes++;
		slow = slow->next;
	}

	return (nodes);
}

/**
 * detect_loop_list - Detects if there is any loop in the list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: It returns 0 if there is no loop otherwise it returns
 * the number of nodes in the list.
 *
 */

size_t detect_loop_list(const listint_t *head)
{
	const listint_t *slow, *fast;

	slow = head->next;
	fast = head->next->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			return (count_nodes_with_loop(slow, fast));
		}

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
/**
 * free_listint_safe - Prints a listint_t linked list and frees the
 * memory space allocated by it safely.
 *
 * @h: A pointer that points to a pointer which in turn points
 * to the head of the list.
 *
 * Return: Returns the number of nodes in the list.
 *
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, i = 0;

	if (*h == NULL)
		return (0);

	nodes = detect_loop_list(*h);

	if (nodes == 0)
	{
		while (*h != NULL)
		{
			temp = (*h)->next;
			nodes++;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}
	else
	{
		for (; i < nodes; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	return (nodes);
}
