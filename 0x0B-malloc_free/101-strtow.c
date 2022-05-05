#include "main.h"
#include <stdlib.h>

/**
 * count_word_len - Counts the length of the word.
 *
 * @s: The word whose length to be counted.
 *
 * Return: Returns the length of the word.
 *
 */

int count_word_len(char *s)
{
	int i = 0, len = 0;

	for (; s[i] && s[i] != ' '; i++)
		len++;
	return (len);
}

/**
 * count_words - Counts the number of words from the string.
 *
 * @str: The string whose words to be counted.
 *
 * Return: Returns the number of words.
 *
 */

int count_words(char *str)
{
	int i = 0, word_count = 0, total_len = 0;

	for (; str[i]; i++)
		total_len += 1;

	for (i = 0; i < total_len; i++)
	{
		if (str[i] != ' ')
		{
			word_count += 1;
			i += count_word_len(str + i);
		}
	}

	return (word_count);
}


/**
 * strtow - Splits a string into words.
 *
 * @str: The string to be splitted.
 *
 * Return: Returns NULL if str is null or str quals empty
 * string or if it fails to create a memory, otherwise it
 * returns a pointer to an array of strings (words).
 *
 */

char **strtow(char *str)
{
	int i = 0, w_index = 0, l_index, word_len, no_of_words;
	char **word_from_str;

	if (str == NULL || *str == '\0')
		return (NULL);

	no_of_words = count_words(str);
	if (no_of_words == 0)
		return (NULL);

	word_from_str = malloc(sizeof(char *) * (no_of_words + 1));
	if (word_from_str == NULL)
		return (NULL);

	for (; w_index < no_of_words; w_index++)
	{
		while (str[i] == ' ')
			i++;
		word_len = count_word_len(str + i);
		word_from_str[w_index] = malloc(sizeof(char) * (word_len + 1));

		if (word_from_str[w_index] == NULL)
		{
			for (; w_index >= 0; w_index--)
				free(word_from_str[w_index]);

			free(word_from_str);
			return (NULL);
		}

		for (l_index = 0; l_index < word_len; l_index++)
			word_from_str[w_index][l_index] = str[i++];

		word_from_str[w_index][l_index] = '\0';
	}
	word_from_str[w_index] = NULL;

	return (word_from_str);
}
