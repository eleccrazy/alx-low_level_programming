#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from.
 *
 * Return: Returns 0 with success.
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
