#include<stdio.h>

/**
 * main - prints the number of command line arguments passed to it.
 *
 * @argc: number of command line arguments
 * @argv: The name of the array that holds the command line arguments
 *
 * Return: returs 0 with success
 *
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
