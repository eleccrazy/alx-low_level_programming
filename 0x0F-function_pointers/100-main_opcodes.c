#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of itself
 *
 * @args: The number of arguments passed
 * @argv: An array that holds the arguments.
 *
 * Return: 0 with success
 *
 */

int main(int args, char **argv)
{
	int bytes, i = 0;
	int (*loc)(int, char **);
	unsigned char opcode;

	loc = &main;

	if (args != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (; i < bytes; i++)
	{
		opcode = *(unsigned char *)(loc++);
		printf("%.2x", opcode);

		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
