#include<stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: number of command line arguments or size
 * of the array argv
 * @argv: The array name that holds the command line arguments
 *
 * Return: returns 0 with success
 *
 */

int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", *argv);
	return (0);
}
