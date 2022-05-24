#include "lists.h"
#include <stdio.h>

/*
 * Desc: This code is written to detect any loop in the linked list, to
 * count unique nodes in a list, and to print nodes safely by preventing
 * loops with in the list.
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
 * count_nodes - Counts all unique nodes in the list.
 *
 * @slow: A pointer to the address where the two pointers
 * fast and slow point on the same address int the detect_loop
 * function.
 *
 * Return: Returns numbe of unique nodes with in the loop.
 *
 */

int count_nodes(const listint_t *slow)
{
	int nodes = 3;
	const listint_t *traverse = slow;

	while (traverse->next != slow)
	{
		nodes++;
		traverse = traverse->next;
	}

	return (nodes);
}

/**
 * detect_loop - Detects if there is any loop in the list.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: It returns 0 if there is no loop otherwise it returns
 * the number of nodes in the list.
 *
 */

int detect_loop(const listint_t *h)
{
	const listint_t *slow = h, *fast = h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (count_nodes(slow));
	}

	return (0);
}
/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: A pointer that points to the head of the list.
 *
 * Return: Returns the number of nodes in the list.
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0, i = 0;

	if (head == NULL)
		return (0);

	nodes = detect_loop(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			nodes++;
			head = head->next;
		}
	}
	else
	{
		for (; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
