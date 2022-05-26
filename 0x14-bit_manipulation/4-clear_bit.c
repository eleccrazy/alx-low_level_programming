#include "main.h"

/**
 * clear_bit - Sets the bit at index to 0.
 *
 * @n: A pointer to the bit to be setted.
 * @index: The index at which the bit to be setted.
 *
 * Return: Returns -1, if an error occurs, otherwise
 * it returns 1.
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
