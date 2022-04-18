#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: 0 with success
 */
int main(void)
{
	int res = 0;
	char ch;

	srand(time(NULL));
	while (res <= 2645)
	{
		ch = rand() % 128;
		res += ch;
		putchar(ch);
	}
	putchar(2772 - res);
	return (0);
}
