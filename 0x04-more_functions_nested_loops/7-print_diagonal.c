#include "main.h"
/**
 * print_line -> draws diagonal line
 * @n: integer
 */
void print_diagonal(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}