#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints some message
 * Uses write function to print the message
 * Return: 1 without failure.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
