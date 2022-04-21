#include "main.h"

/**
 * print_number - prints a number that it accepts
 * @n: a number to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
