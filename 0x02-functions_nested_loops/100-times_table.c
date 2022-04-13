#include "main.h"

/**
  * print_times_table - prints time table
  * @n: an argument taken by the function print_times_table
  */


void print_times_table(int n)
{
	int rows, cols, i, a;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			_putchar('0');
			if (n != 0)
				_putchar(',');
			for (cols = 1; cols <= n; cols++)
			{
				i = cols * rows;
				_putchar(' ');
				if (i < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(i + '0');
				}

				else if (i >= 10 && i <= 99)
				{
					_putchar(' ');
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
				else
				{

					a = i / 10;
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
					_putchar((i % 10) + '0');
				}
				if (cols != n)
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
