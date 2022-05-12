#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers, followed by a new line.
 *
 * @separator: The string to be printed between the numbers.
 * @n: The number of integers passed to the print_numbers function.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;

	va_list arg_param;

	va_start(arg_param, n);

	while (count < n)
	{
		printf("%d", va_arg(arg_param, int));

		if ((separator != NULL) && (count < n - 1))
			printf("%s", separator);

		count++;
	}

	printf("\n");

	va_end(arg_param);
}
