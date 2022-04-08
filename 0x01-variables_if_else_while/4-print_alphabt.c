#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints all alphabets in lowercase except letters q and e.
 * Return: returns 0
 */

int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{
		if (!((small == 'q') || (small == 'e')))
			putchar(small);
	}
	putchar('\n');

	return (0);
}
