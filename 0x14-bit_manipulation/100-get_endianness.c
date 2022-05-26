#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: Returns 0, if big endian, or
 * Returns 1, if little indian.
 *
 */

int get_endianness(void)
{
	int num = 1;

	char *e = (char *)&num;

	if (*e != 1)
		return (0);

	return (1);
}
