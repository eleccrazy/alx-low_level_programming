#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of command line arguments
 * @argv: name of the array that holds command line arguments
 *
 * Return: returns 1 if the number of command line arguments entered
 * are not enough, otherwise it retuns 0 with success
 *
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int res = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		for (; i < 3; i++)
			res *= atoi(argv[i]);
		printf("%d\n", res);
	}

	return (0);
}
