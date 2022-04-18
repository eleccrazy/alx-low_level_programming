#include "main.h"

/**
  * swap_int - swaps two integer numbers
  * @a: the first number to be swapped
  * @b: the second number to be swapped
  */

void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
