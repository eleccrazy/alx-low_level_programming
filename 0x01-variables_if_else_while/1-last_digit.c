#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Checks the last digit of the random number
 * Return: returns 0
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	if ((digit <= 5) && (digit != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);

	return (0);
}
