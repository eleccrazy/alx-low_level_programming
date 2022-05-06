#include "main.h"
#include <stdlib.h>

/**
 * length_of_string - calculates the length of the string.
 *
 * @str: The string whose length to be computed.
 *
 * Return: returns the length of the string.
 *
 */

int length_of_string(char *str)
{
	int len, index = 0;

	while (str[index])
	{
		len++;
		index++;
	}

	return (len);
}

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
	unsigned int s1_len, index = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = length_of_string(s1);

	new_str = malloc(sizeof(char) * (s1_len + n + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++, index++)
		new_str[index] = s1[i];

	for (j = 0; index < (s1_len + n); j++, index++)
		new_str[index] = s2[j];

	new_str[index++] = '\0';

	return (new_str);

}
