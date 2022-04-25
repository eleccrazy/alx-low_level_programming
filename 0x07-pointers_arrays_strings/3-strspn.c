#include "main.h"

/**
 * _strspn - Searches bytes of accept from string s. And Gets the
 * length of the sub string which consists all bytes of accept.
 *
 * @s: The string to be searched.
 * @accept: The bytes to be compared with the sub strings of s.
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int b = 0;

	while (*s)
	{
		for (i = 0; *accept; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}

			if (accept[i + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
