#include "main.h"


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for(; dest[i] != '\0'; i++)
		;
	for(; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[i + j] = src[j];
	}
	return (dest);
}
