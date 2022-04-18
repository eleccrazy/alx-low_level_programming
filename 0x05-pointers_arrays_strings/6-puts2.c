#include "main.h"

/**
  * puts2 - prints every character in a different way
  * @str: a string argument to be printed
  */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
