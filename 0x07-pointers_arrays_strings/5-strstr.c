#include "main.h"

/**
 * _strstr - Finds the first occurance of the substring needle
 * in the string haystack.
 *
 * @haystack: The string to be searched
 * @needle: The string which consists the sub string to be searched for
 *
 * Return: Returns a pointer to the beginning of the located sub string,
 * or NULL if the sub string is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i])
			{
				j = 0;

				while (*(haystack + j) == needle[j])
				{
					return (haystack);
					j++;
					haystack++;
				}
			}
		}

		haystack++;
	}

	return ('\0');
}
