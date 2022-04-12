#include "main.h"

/**
  * times_table - prints the table
  */

void times_table(void)
{
	int row, col;
	int mult = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = (row * col);
			if (mult < 10)
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (col != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
