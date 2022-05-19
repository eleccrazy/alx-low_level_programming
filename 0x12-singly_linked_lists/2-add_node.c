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
 * add_node - Adds a node at the beginning of the list.
 *
 * @head: A pointer that holds address of a pointer to
 * the head of the linked list list_t.
 *
 * @str: The string to be added at the beginning of the list.
 *
 * Return: It returns NULL if it failed, otherwise it returns
 * the address of the new element added in the list.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = calc_len(str);
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
