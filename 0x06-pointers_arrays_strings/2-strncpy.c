#include "main.h"

/**
 * _strncpy - copies string from src to dest with a maximum bytes of n
 * @dest: a string argument to store the copied string
 * @src: a string argument to be copied
 * @n: the maximum number of bytes to be copied
 * Return: returns a string pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; src[i] != '\0'; i++)
		;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	for (j = i; j < n; j++)
		dest[j] = '\0';

	return (dest);

}
