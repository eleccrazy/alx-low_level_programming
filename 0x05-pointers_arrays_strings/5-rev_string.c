#include "main.h"

/**
  *rev_string - reverses strings that it accepts as an argument
  *@s: a string argument to be reversed
  */

void rev_string(char *s)
{
	int length, mid;
	int i = 0;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	mid = length / 2;

	while (mid--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
