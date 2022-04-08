#include<stdio.h>

/**
 * main - prints all digits starting from 0 to 9
 * Return: returns 0
 */

int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
		printf("%d", digits);
	printf("\n");

	return (0);
}
