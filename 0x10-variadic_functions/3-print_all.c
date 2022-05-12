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
	int number = va_arg(ap, int);

	printf("%d", number);
}

/**
 * print_float - Prints float
 *
 * @ap: The argument parameter pointed to the float.
 *
 */

void print_float (va_list ap)
{
	double number = va_arg(ap, double);

	printf("%f", number);
}

/**
 * print_char - Prints char
 *
 * @ap: The argument parameter pointed to char
 *
 */

void print_char(va_list ap)
{
	char ch = va_arg(ap, int);

	printf("%c", ch);
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
		printf("(nil)");

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
	int i = 0;

	va_list arg_param;

	va_start(arg_param, format);

	while (format && *(format + i))
	{

		while (!(*(format + i) == 'c' || *(format + i) == 'i' ||
				*(format + i) == 's' || *(format + i) == 'f'))
			i++;

		switch (*(format + i))
		{
			case 'c':
				print_char(arg_param);
				break;
			case 'i':
				print_int(arg_param);
				break;
			case 's':
				print_string(arg_param);
				break;
			case 'f':
				print_float(arg_param);
				break;
			default:
				break;
		}

		if ((*(format + i + 1)))
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(arg_param);
}
