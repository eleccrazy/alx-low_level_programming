#include "main.h"

/**
  * more_numbers - prints numbers from 0 - 14 10 times
  */

void more_numbers(void)
{
	int digits, lines;

	for (lines = 0; lines < 10; lines++)
	{
		for (digits = 0; digits < 15; digits++)
		{
			if (digits > 9)
				_putchar((digits / 10) + '0');
			_putchar((digits % 10) + '0');
		}
		_putchar('\n');
	}
}
