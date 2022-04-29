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
int main(int argc, char *argv[])
{
	int sum = 0, i, j, length;
	char *sub_string;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			sub_string = argv[i];
			length = strlen(sub_string);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(sub_string + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}

