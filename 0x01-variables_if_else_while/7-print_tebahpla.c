#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the lowercase characters in reverse order
 * Return: returns 0
 */

int main(void)
{
	char small;

	for (small = 'z'; small >= 'a'; small--)
		putchar(small);
	putchar('\n');

	return (0);
}
