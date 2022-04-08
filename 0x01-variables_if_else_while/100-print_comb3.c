#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints two digit combinations
 * Return: returns 0
 */

int main(void)
{
	int first, second;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			if (first != second)
			{
				if (first == 0 || second > first)
				{
					putchar(first + '0');
					putchar(second + '0');
					if (!((first == 8) && (second == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
