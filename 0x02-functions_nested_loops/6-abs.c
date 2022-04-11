#include "main.h"

/**
  * _abs - prints the absolute value of the number
  * Return: returns positive result
  * @number: an argument to _abs function
  */

int _abs(int number)
{

	if (number < 0)
		return (-1 * number);
	else if (number > 0)
		return (number);
	else
		return (0);
	return (1);
}
