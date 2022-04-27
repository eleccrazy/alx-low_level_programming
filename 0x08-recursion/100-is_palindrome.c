#include "main.h"

int find_len(char *s);
int check_pali(char *s, int len, int i);


/**
 * is_palindrome - checks the string whether it is palindrome
 * or not.
 *
 * @s: The string to be checked
 *
 * Return: returns 1 if it is palindrome, otherwise 0
 *
 */

int is_palindrome(char *s)
{
	int i = 0, str_len;

	str_len = find_len(s);

	if (*s == '\0')
		return (1);
	return (check_pali(s, str_len, i));
}

/**
 * find_len - computes the length of the string that it accepts
 *
 * @s: The string whose length is to be computed
 *
 * Return: returns the length of the string s
 *
 */

int find_len(char *s)
{
	if (*s)
		return (1 + find_len(s + 1));
	else
		return (0);
}

/**
 * check_pali - checks if a string is a palindrome
 *
 * @s: The string to be checked
 * @len: The length of the string to be checked
 * @i: The index of the string to be checked
 *
 * Return: returns 1 if the string is palindrome, otherwirse
 * it returns 0.
 *
 */
int check_pali(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_pali(s, len, i + 1));
	return (0);
}
