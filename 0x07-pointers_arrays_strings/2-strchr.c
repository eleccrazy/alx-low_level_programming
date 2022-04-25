#include "main.h"

/**
 * _strchr - Searches and locates a character from the string.
 *
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: Returns a pointer to the first occurance of the character c
 * in the string s, or NULL if the character is not found.
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
