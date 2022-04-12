#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - prints all natural numbers upto 98
  * @n: an argument passed to print_to_98
  */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}

