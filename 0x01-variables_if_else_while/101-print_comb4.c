#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints every three different combination of digits
 * Return: returns 0
 */

int main(void)
{
	int first, second, third;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			for (third = 0; third <= 9; third++)
			{
				if (first != second && second != third && third != first)
				{
					if ((first == 0 || second > first) && (second == 0 || third > second))
					{
						putchar(first + '0');
						putchar(second + '0');
						putchar(third + '0');
						if (!(first == 7 && second == 8 && third == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
