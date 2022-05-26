#include "main.h"

/**
 * get_bit - gets a bit at a given index.
 *
 * @n: The number to be searched for bits at the specified index.
 * @index: The index at which the bit is returned. The index starts
 * from 0.
 *
 * Return: Returns -1, if an error is occur, otherwise
 * it returns the bit  at specfied index.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) != 0)
		return (1);

	return (0);
}
