#include "main.h"

/** 
  * puts_half - prints the second half of the string
  * @str: a string argument
  */

void puts_half(char *str)
{
	int length = 0;
	int half_index;

	while (*(str + length) != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
	{
		half_index = (length - 1) / 2;
	}
	else
		half_index = length / 2;

	while (half_index < length)
	{
		_putchar(str[half_index]);
		half_index++;
	}

	_putchar('\n');
}
