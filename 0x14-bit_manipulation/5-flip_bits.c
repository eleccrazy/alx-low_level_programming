#include "main.h"

/**
 * flip_bits - Counts the number of bits to be needed to flip
 * from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip to get one number
 * from the other.
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int no_of_bits = 0, flip;

	flip = m ^ n;
	while (flip)
	{
		no_of_bits += (1 & flip);
		flip >>= 1;
	}

	return (no_of_bits);
}
