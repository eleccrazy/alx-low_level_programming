#include <stdio.h>

/**
 * main - prints sum of all multiples of 3 or 5 below 1024
 * Return: 0 with success
 */

int main(void)
{
	int m = 0;
	int sum = 0;

	while (m < 1024)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			sum += m;
		}
		m++;
	}
	printf("%d\n", sum);
	return (0);
}
