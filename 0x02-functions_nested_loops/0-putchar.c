#include "main.h"

/**
  * main - prints some text with _putchar function
  * Return: returns 0 with success
  */

int main(void)
{
	char *putchar;

	for (putchar = "_putchar\n"; *putchar != '\0'; putchar++)
		_putchar(*putchar);

	return (0);

}
