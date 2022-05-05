#include "main.h"
#include <stdlib.h>

/**
 * size_of_str - Computes the size of string
 *
 * @str: The string whose size to be computed.
 *
 * Return: The size of the string.
 *
 */

int size_of_str(char *str)
{
	int size = 0, index = 0;

	for (; str[index]; index++)
		size++;
	return (size);
}

/**
 * str_concat - Concatenates two strings
 *
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 *
 * Return: returns NULL if it fails to create a memory space
 * otherwise, it returns the pointer to the concatenated
 * string.
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int s2_index = 0, s1_size, s2_size, size, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_size = size_of_str(s1);
	s2_size = size_of_str(s2);

	size = s1_size + s2_size;

	str_concat = malloc(sizeof(char) * size + 1);

	if (str_concat == NULL)
		return (NULL);

	for (index = 0; index < s1_size; index++)
		str_concat[index] = *(s1 + index);

	for (; index < size && s2_index < s2_size; index++, s2_index++)
		str_concat[index] = *(s2 + s2_index);

	str_concat[size] = '\0';

	return (str_concat);
}
