#include "main.h"

/**
 * set_string - sets the value of the pointer **s to the
 * the value of a char *to.
 *
 * @s: The pointer that points to the string to be setted
 * @to: The char
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
