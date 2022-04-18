#include "main.h"
#include<stdio.h>

/**
  * *_strcpy - copies string from source to destination
  * @dest: an argument as destination of the string
  * @src: an argument as source of the string
  * Return: returns dest with success
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count))
	{
		dest[count] = src[count];
		count++;
	}

	dest[count] = '\0';
	return (dest);
}
