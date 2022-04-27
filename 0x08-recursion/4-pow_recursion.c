#include "main.h"

/**
 * _pow_recursion - Computes x raised to y
 *
 * @x: The number to be raised
 * @y: The power
 *
 * Return: If y is less than 0 it returns -1, if y is 1, it
 * returns x, and if it y is 0 it returns 1 otherwise
 * it returns the result.
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
