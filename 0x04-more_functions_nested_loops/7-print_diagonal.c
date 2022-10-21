#include "main.h"
/**
 * print_diagonal -> draws diagonal line
 * @n: integer
 */
void print_diagonal(int n)
{
	int i, x;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
