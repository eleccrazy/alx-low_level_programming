#include "main.h"

/**
 * _strstr - Finds the firsst occurance of the substring needle in
 * the string haystack.
 *
 * @haystack: The string to be searched
 * @needle: The sub string to be located
 *
 * Return: Returns a pointer to the beginning of the located
 * substring, or NULL if the sub string is not found
 *
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return ('\0');
}
