#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed
 * by s with the constant byte b.
 * @s: A memory area used to hold bytes
 * @b: Bytes to be filled in the memory area
 * @n: Maximum number of bytes to be filled in the memory area.
 * Return: Returns a pointer to the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
