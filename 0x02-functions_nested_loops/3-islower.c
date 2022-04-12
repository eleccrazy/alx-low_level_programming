#include "main.h"

/**
  * _islower - checks for lowercase of the character
  * Return: returns 1 if it is lowercase, otherwise 0
  * @c: An argument for functio _islower
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
