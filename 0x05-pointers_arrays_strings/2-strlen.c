#include "main.h"

/**
  * _strlen - computes the length of the given string
  * @s: a pointer point to character array
  * Return: returns length of characters
  */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;

		s++;
	}

	return (length);
}
