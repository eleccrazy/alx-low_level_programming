#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: A pointer that holds chessboard values to be printed
 *
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (a[i][7])
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
