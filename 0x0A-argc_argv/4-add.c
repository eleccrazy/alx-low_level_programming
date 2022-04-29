#include<stdio.h>
#include<stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of command line arguments
 * @argv: name of the array that holds command line arguments
 *
 * Return: returns 1 if a non digit character is encountered,
 * otherwise it returns 0 with success
 *
 */

int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
		printf("0\n");

	else if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
