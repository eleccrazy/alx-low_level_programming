#include "lists.h"
#include <string.h>

/**
 * calc_len - calculates the length of a string
 *
 * @s: The string whose legth to be computed.
 *
 * Return: Returns the length of the string.
 *
 */

int calc_len(const char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * add_node_end - adds the node at the end of the list.
 *
 * @head: A pointer that holds the address of a pointer to
 * the head of the list.
 * @str: The string to added to the list.
 *
 * Return: It returns NULL if it fails to create a memory,
 * otherwise it returns the address of the new element.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *traverse;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = calc_len(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;

		traverse->next = new_node;
	}

	return (*head);
}
