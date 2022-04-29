#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

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

int check_arg_for_digit(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (isdigit(str[i]) == 0)
			return (0);
		else
			return (1);
	}

	return (0);
}

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
			if (check_arg_for_digit(argv[i]) == 0)
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
