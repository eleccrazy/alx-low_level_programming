#include "main.h"

/**
 * set_bit - Sets the value of bit at index to 1.
 *
 * @n: A pointer to the bit
 * @index: The index at which the bit is to be set.
 *
 * Return: Returns -1, if an error occurs, otherwise it returns 1.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
