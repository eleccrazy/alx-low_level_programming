#include "main.h"

/**
 * cap_string - capitalizes the words
 * @str: a string argument to be capitalized
 * Return: a pointer to capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' ||
				str[i] == '\t' ||
				str[i] == '\n' ||
				str[i] == '.' ||
				str[i] == ';' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}')
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
	}

	return (str);
}
