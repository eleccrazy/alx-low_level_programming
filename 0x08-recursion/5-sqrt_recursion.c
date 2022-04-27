#include "main.h"

int find(int n, int r);

/**
 * _sqrt_recursion - computes the natural square root of a number
 *
 * @n: The number to be computed
 *
 * Return: return -1 if n has no a natural square root, otherwise
 * it returns the square root of n.
 *
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find(n, r));
}

/**
 * find - finds the natural square root of n
 *
 * @n: A number whose root is going to be computed
 * @r: The root to be tested
 *
 * Return: returns root if its square equals to num, otherwise -1.
 *
 */

int find(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r == n / 2)
		return (-1);
	return (find(n, r + 1));
}
