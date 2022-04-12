#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times alphabets
  * Return: no return statement
  */

void print_alphabet_x10(void)
{
	int line = 0;
	char alpha;

	while (line < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			++alpha;
		}
		_putchar('\n');
		++line;
	}
}
