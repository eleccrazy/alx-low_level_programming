#include <stdio.h>

/**
 * print_before_main - prints some message before the main function
 * gets executed.
 *
 */

void __attribute__ ((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
