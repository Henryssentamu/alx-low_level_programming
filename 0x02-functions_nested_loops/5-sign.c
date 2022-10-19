#include "main.h"
/**
 * print_sign -> checking the sign of a number
 * @n: sign is + or -
 * Return: 1 for +ive, 0 for zero and -1 for -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	else
	{
		_putchar('0');

		return (0);
	}
}
