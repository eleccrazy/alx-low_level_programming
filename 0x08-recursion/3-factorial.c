#include "main.h"

/**
 * factorial - computes and returns factorial of the given
 * number
 *
 * @n: The integer number whose factorial is to be computed
 *
 * Return: returns -1 if n is negative, if n is 0 it returns 1,
 * otherwise it returns the factorial of n.
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
