#include "main.h"
/**
 * print_last_digit -> prints the last digit
 * @a: parameter
 * Return: an integer
 */
int print_last_digit(int a)
{
	int c;

	if (a < 0)
	{
		a = -a;
	}
	else
	{
		a = a;
	}

	c = a % 10;

	_putchar(c + '0');

	return (c);
}
