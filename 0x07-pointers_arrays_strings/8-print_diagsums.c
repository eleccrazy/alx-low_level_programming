#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - prints the sum of diagonal elements in the
 * given 2-D array.
 *
 * @a: The 2-D array
 * @size: The size of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int sumA = 0;
	int sumB = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sumA += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sumB += a[i];
		a -= size;
	}

	printf("%d, %d\n", sumA, sumB);
}
