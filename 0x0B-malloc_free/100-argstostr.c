#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program. And
 * prints each argument in new line.
 *
 * @ac: Number of arguments to be passed.
 * @av: An array of pointers to the passed arguments.
 *
 * Return: Returns NULL if ac is 0 or av is null or if the
 * program fails to create a memory, otherwise it returns
 * a pointer to the new string.
 *
 */

char *argstostr(int ac, char **av)
{
	char *big_str;
	int i = 0, str_index = 0, total_size = 0, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			total_size += 1;
		i++;
	}

	total_size += ac;

	big_str = malloc(sizeof(char) * total_size + 1);

	if (big_str == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++, str_index++)
			big_str[str_index] = av[i][j];

		big_str[str_index++] = '\n';
		i++;
	}

	big_str[str_index++] = '\0';

	return (big_str);
}
