#include<stdio.h>
#include<stdlib.h>

/**
 * main - Uses putchar to print the digits
 * Return: returns 0
 */

int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
		putchar(digits + '0');
	putchar('\n');

	return (0);
}
