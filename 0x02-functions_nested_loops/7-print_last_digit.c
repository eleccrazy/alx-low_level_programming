#include "main.h"

/**
  * print_last_digit - prints the last digit
  * Return: returns the last digit of the number
  * @number: an argument given to function print_last_digit
  */

int print_last_digit(int number)
{

	number = number % 10;

	if (number < 0)
		number *= -1;

	_putchar(number + '0');
	return (number);
}
