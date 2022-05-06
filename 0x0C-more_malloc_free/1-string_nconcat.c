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
	unsigned int len, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = length_of_string(s1);
	len += n;

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	for (len = 0; s1[index]; len++, index++)
		new_str[len] = s1[index];

	for (index = 0; s2[index] && index < n; index++, len++)
		new_str[len] = s2[index];

	new_str[len] = '\0';

	return (new_str);

}
