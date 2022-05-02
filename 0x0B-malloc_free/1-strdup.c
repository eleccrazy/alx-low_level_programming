#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copies the string given as a parameter to
 * a newely allocated space in memory.
 *
 * @str: The string to be copied to the new memory
 *
 * Return: returns NULL if the str is null or if it is failed
 * to create a memory, otherwise returns a pointer to newely
 * allocated space in memory.
 *
 */

char *_strdup(char *str)
{
	char *dup_str;
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
	{
		size++;
		i++;
	}

	size += 1;

	dup_str = malloc(sizeof(char) * size);

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dup_str[i] = str[i];

	dup_str[size] = '\0';

	return (dup_str);
}
