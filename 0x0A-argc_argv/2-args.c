#include<stdio.h>

/**
 * main - prints all arguments that it receives
 *
 * @argc: number of command line arguments
 * @argv: name of array that holds the command line arguments
 *
 * Return: returns 0 with success
 *
 */

int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
