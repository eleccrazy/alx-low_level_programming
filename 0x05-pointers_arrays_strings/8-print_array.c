#include "main.h"
#include<stdio.h>

/**
  * print_array - prints array elements
  * @a: an argument passed as array
  * @n: an argument passed as the size of the array
  */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
			printf(", ");
	}
	printf("\n");
}
