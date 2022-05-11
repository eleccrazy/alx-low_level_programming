#include "3-calc.h"

/**
 * op_add - Adds two integer numbers.
 *
 * @a: The first number to be added.
 * @b: The second number to be added.
 *
 * Return: Returns the addition result of a and b.
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subracts b from a.
 *
 * @a: The first number to be subtarcted.
 * @b: The second number which is subtracted from a
 *
 * Return: returns a -b
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies a and b
 *
 * @a: The first number to be multiplied.
 * @b: The second number to be multiplied.
 *
 * Return: returns a * b
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b.
 *
 * @a: The dividend
 * @b: The divisor
 *
 * Return: returns the quetiont.
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computers the mod of a by b.
 *
 * @a: the dividend
 * @b: the divisor
 *
 * Return: returns the remainder of a by b
 *
 */

int op_mod(int a, int b)
{
	return (a % b);
}
