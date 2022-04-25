#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory
 * area dest.
 *
 * @dest: Memory location to hold the copied bytes
 * @src: Memory area that holds bytes to be copied
 * @n: Maximum number of bytes to be copied
 *
 * Return: Returns a pointer to memory location dest
 * that holds the copied bytes.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	return (dest);
}
