#include <stdio.h>

/**
 * main - Prints all possible combination of two 2-digit combinations
 * Return: returns 0 with success
 */
int main(void)
{
	int first, second, third, t;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{
			for (third = 48; third <= 57; third++)
			{
				for (t = 48; t <= 57; t++)
				{
				if (((third + t) > (first + second) &&  third >= first) || first < third)
				{
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(t);
					if (first + second + third + t == 225 && first == 98)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
