#include "main.h"

/**
  * _puts - prints string that it receives
  * @str: string pointer passed to function _puts
  */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}

	_putchar('\n');
}
