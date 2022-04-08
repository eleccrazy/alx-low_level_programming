#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints alphabets in both lower and upper cases
 * Return: returns 0
 */

int main(void)
{
	char small, capital;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	for (capital = 'A'; capital <= 'Z'; capital++)
		putchar(capital);
	putchar('\n');

	return (0);
}
