#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints hexadecimal digits
 * Return: returns 0
 */

int main(void)
{
	char number, ch;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
