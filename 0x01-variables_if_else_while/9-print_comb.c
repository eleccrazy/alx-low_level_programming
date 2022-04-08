#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints every single combination of digits in ascending order
 * Return: returns 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
