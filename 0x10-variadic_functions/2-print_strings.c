#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings, follwed by a new line.
 *
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the print_strings function.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	char *str_arg;

	va_list arg_param;

	va_start(arg_param, n);

	while (count < n)
	{
		str_arg = va_arg(arg_param, char *);

		if (str_arg == NULL)
			printf("(nil)");
		else
			printf("%s", str_arg);

		if ((separator != NULL) && (count < n - 1))
			printf("%s", separator);

		count++;
	}

	printf("\n");

	va_end(arg_param);
}
