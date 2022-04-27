#include "main.h"

/**
 * _strlen_recursion - Calculates and returns the length of a string
 *
 * @s: The string whose length to be computed
 *
 * Return: returns the length of a given string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
