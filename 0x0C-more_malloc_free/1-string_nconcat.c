#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with first n bytes
 * of string s2 to s1.
 *
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The maximum number of bytes from s2 to be concatenated.
 *
 * Return: It returns NULL, if it fails to create a memory space,
 * otherwise it returns a pointer to the newely allocated space in
 * memory
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len = n, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	new_str = malloc(sizeof(char) * len + 1);

	if (new_str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		new_str[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		new_str[len++] = s2[i];

	new_str[len] = '\0';

	return (new_str);

}
