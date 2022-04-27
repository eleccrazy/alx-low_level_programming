#include "main.h"

/**
 * _puts_recursion - Prints a string followed by new line
 *
 * @s: The starting address of the string s.
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
		return;
	}
}
