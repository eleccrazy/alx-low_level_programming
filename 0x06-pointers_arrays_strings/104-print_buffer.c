#include "main.h"
#include<stdio.h>

/**
 * print_buffer - prints 10 bytes a buffer at a time, starts with byte position
 * @b: The buffer to be printed
 * @size: Number fo bytes to be printed
 */

void print_buffer(char *b, int size)
{
	int byte, i;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + byte));
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				break;
			else if (*(b + i + byte) >= 31 &&
				 *(b + i + byte) <= 126)
				printf("%c", *(b + i + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
