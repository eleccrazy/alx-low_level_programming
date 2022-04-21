#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: a string argument which have the firtt number to be added.
 * @n2: a string argument which have the second number to be added.
 * @r: a buffer to store the result
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tenth_digit = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0') + tenth_digit;
		*(r + r_index) = (num % 10) + '0';
		tenth_digit = num / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tenth_digit;
		*(r + r_index) = (num % 10) + '0';
		tenth_digit = num / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tenth_digit;
		*(r + r_index) = (num % 10) + '0';
		tenth_digit = num / 10;
	}

	if (tenth_digit && r_index >= 0)
	{
		*(r + r_index) = (tenth_digit % 10) + '0';
		return (r + r_index);
	}

	else if (tenth_digit && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - Adds two numbers
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len = 0, n2_len = 0;

	for (i = 0; n1[i]; i++)
		n1_len++;

	for (i = 0; n2[i]; i++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	r[size_r] = '\0';

	return (add_strings(n1, n2, r, --size_r));
}

