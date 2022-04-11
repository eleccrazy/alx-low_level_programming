#include "main.h"

/**
  * print_sign - prints the sign of the number
  *
  * @n: an argument passed to print_sign function
  * Return: returns 1 if positive, -1 if negative, and 0 if zero
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
