#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - prints all natural numbers upto 98
  * @n: an argument passed to print_to_98
  */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i < 98; i++)
			printf("%d, ", i);
		printf("98\n");

	}
	else if (n > 98)
	{
		for (i = n ; i > 98; i--)
			printf("%d, ", i);
		printf("98\n");
	}
	if (n == 98)
		printf("%d\n", n);
}
