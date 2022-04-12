#include "main.h"

/**
  * print_alphabet - prints alphabets using _putchar function
  * Return: returns nothing
  */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
