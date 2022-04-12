#include "main.h"

/**
  * print_last_digit - prints the last digit
  * Return: returns the last digit of the number
  * @number: an argument given to function print_last_digit
  */

int print_last_digit(int number)
{
	int last_digit;

	if (number < 0)
		number = -1 * number;
	last_digit = number % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
