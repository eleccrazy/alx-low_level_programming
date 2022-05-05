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
 * init_str - Initializes a 2-D array to hold words splitted from
 * a given string.
 *
 * @str: A string whose words to be splitted.
 *
 * Return: returns NULL if the number of words in a given string are
 * 0 or if it fails to create a memory space, otherwise it returns
 * a pointer to an array of strings.
 *
 */

char **init_str(char *str)
{
	char **new_str;
	int i = 0, no_of_words, no_of_letters, index = 0;

	no_of_words = count_words(str);
	if (no_of_words == 0)
		return (NULL);

	new_str = malloc(sizeof(char *) * (no_of_words + 1));

	if (new_str == NULL)
		return (NULL);

	for (; i < no_of_words; i++)
	{
		while (str[index] == ' ')
			index++;

		no_of_letters = count_word_len(str + index);
		new_str[i] = malloc(sizeof(char) * (no_of_letters + 1));

		if (new_str[i] == NULL)
		{
			for (; i >= 0; i--)
				free(new_str[i]);
			free(new_str);
			return (NULL);
		}
	}

	return (new_str);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The string to be splitted.
 *
 * Return: Returns NULL if str is null or str quals empty string,
 * otherwise it returns a pointer to an array of strings (words).
 *
 */

char **strtow(char *str)
{
	int i = 0, w_index = 0, l_index, word_len, no_of_words;
	char **word_from_str;

	if (str == NULL || *str == '\0')
		return (NULL);

	no_of_words = count_words(str);

	word_from_str = init_str(str);

	if (word_from_str == NULL)
		return (NULL);

	for (; w_index < no_of_words; w_index++)
	{
		while (str[i] == ' ')
			i++;
		word_len = count_word_len(str + i);

		for (l_index = 0; l_index < word_len; l_index++)
			word_from_str[w_index][l_index] = str[i++];

		word_from_str[w_index][word_len] = '\0';
	}

	word_from_str[no_of_words] = NULL;

	return (word_from_str);
}
