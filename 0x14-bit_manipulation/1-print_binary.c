#include "main.h"

/**
 * print_binary - Prints a binary representation of a number.
 *
 * @n: The number to be printed.
 *
 */

void print_binary(unsigned long int n)
{
	if (n >= 2)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
