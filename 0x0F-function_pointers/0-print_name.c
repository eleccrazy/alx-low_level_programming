#include "function_pointers.h"

/**
 * print_name - passes name to the function pointed by f.
 *
 * @name: The name to be printed.
 * @f: A function pointer that points to a function, which
 * prints the name.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
