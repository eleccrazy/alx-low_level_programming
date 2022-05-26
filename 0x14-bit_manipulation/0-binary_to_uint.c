#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: Returns 0, if there are one or more characters in the
 * string b that is not 0 or 1, or if b is NULL. Otherwise, it returns
 * the converted number.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, i = 0;

	if (b == NULL)
		return (0);

	for (; b[i]; i++)
		if (b[i] != 48 && b[i] != 49)
			return (0);
	for (i = 0; b[i]; i++)
	{
		number <<= 1;
		number += (*(b + i) - '0');
	}

	return (number);
}
