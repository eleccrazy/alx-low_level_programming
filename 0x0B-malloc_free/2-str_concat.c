#include "main.h"
#include <stdlib.h>

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
	char *concat_str;
	int size_s1 = 0, size_s2 = 0;
	int i, size_conc, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		size_s1++;

	for (i = 0; s2[i]; i++)
		size_s2++;

	size_conc = size_s1 + size_s2;
	size_conc += 1;

	concat_str = malloc(sizeof(char) * size_conc);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		concat_str[i] = s1[i];

	for (; i < size_conc && j < size_s2; i++, j++)
		concat_str[i] = s2[j];

	concat_str[size_conc] = '\0';

	return (concat_str);
}
