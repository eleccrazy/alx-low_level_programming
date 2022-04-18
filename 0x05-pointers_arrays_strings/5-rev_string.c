#include "main.h"

/**
  *rev_string - reverses strings that it accepts as an argument
  *@s: a string argument to be reversed
  */

void rev_string(char *s)
{
	int length = 0;
	int index;
	int mid = 0;
	char temp;

	while (*(s + length) != '\0')
	{
		length++;
	}

	index = length - 1;

	while (mid - index)
	{
		temp = s[index];
		s[index] = s[mid];
		s[mid] = temp;
		mid++;
		index--;
	}
}
