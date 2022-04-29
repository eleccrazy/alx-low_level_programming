#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: number of command line arguments
 * @argv: name of the array to hold command line arguments
 *
 * Return:returns 1 if the arguments are not exactly 1, otherwise
 * returns 0 with success
 *
 */

int main(int argc, char **argv)
{
	int coin_count = 0, money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (money != 0)
		{
			if (money % 10 == 9 || money % 10 == 7)
				money -= 2;
			else if (money % 25 == 0)
				money -= 25;
			else if (money % 10 == 0)
				money -= 10;
			else if (money % 5 == 0)
				money -= 5;
			else if (money % 2 == 0)
			{
				if (money % 10 == 6)
					money -= 1;
				else
					money -= 2;
			}
			else
				money -= 1;
			coin_count++;
		}

		printf("%d\n", coin_count);
	}
	return (0);
}
