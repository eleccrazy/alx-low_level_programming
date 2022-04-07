#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints alphabet characters from a to z in lowercase
 * Return: returns 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
