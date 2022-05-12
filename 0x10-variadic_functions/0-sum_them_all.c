#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 *
 * @n: Number of arguments to be passed.
 *
 * Return: Returns the sum of the numbers.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count = 0, sum = 0;

	va_list arg_param;

	va_start(arg_param, n);

	for (; count < n; count++)
		sum += va_arg(arg_param, int);

	va_end(arg_param);

	return (sum);
}
