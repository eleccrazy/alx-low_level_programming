#include <stdio.h>
#include <unistd.h>
/**
 * main - prints two 2 number combinations
 * Return: returns 0 (success)
 */
int main(void)
{
	int first, second, third, l;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{
			for (third = 48; third <= 57; third++)
			{
				for (l = 48; l <= 57; l++)
				{
				if (((third + l) > (first + second) &&  third >= first) || first < third)
				{
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(l);

					if (first + second + third + l == 227 && first == 57)
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
