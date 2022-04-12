#include "main.h"

/**
  * print_alphabet - prints alphabets using _putchar function
  * Return: returns 0 with success
  */

int print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
