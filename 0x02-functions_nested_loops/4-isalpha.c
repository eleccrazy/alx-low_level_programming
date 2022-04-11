#include "main.h"

/**
  * _isalpha - checks for alphabet characters
  * Return: returns 1 if it is alphabet letter, otherwise 0
  * @c: an argument for function _isalpha
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
