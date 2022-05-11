#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the result.
 *
 * @args: The numbr of arguments to be passed
 * @argv: An array that holds the passed arguments
 *
 * Return: 0 with success
 *
 */

int main(int args, char *argv[])
{
	int first, second;
	char *operator;

	if (args != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(argv[1]);
	operator = argv[2];
	second = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && (second == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(first, second));

	return (0);
}
