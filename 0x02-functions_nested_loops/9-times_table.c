#include "main.h"

/**
  * times_table - prints the table
  */

void times_table(void)
{
	int i, rows, cols;

	for (rows = 0; rows < 10; rows++)
	{
		for (cols = 0; cols < 10; cols++)
		{
			i = cols * rows;
			if (i < 10)
			{
				if (cols != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (cols != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
