#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_int - Prints integer
 *
 * @ap: The argument parameter pointed to the int.
 *
 */

void print_int (va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints float
 *
 * @ap: The argument parameter pointed to the float.
 *
 */

void print_float (va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_char - Prints char
 *
 * @ap: The argument parameter pointed to char
 *
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_string - Prints a string
 *
 * @ap: The argument parameter pointed to string
 *
 */

void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything that it accepts.
 *
 * @format: A list of type of arguments passed to the function.
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";

	print_struct form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_list arg_param;

	va_start(arg_param, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(form[j].fmt)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			form[j].printer(arg_param);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(arg_param);
}
