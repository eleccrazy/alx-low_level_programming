#include "main.h"

/**
  * puts_half - prints the second half of the string
  * @str: a string argument
  */

void puts_half(char *str)
{
	int length = 0;

	for (; str[length] != '\0'; length++)
		;
	length++;

	for (length /= 2; str[length] != '\0'; length++)
		_putchar(str[length]);

	_putchar('\n');
}
