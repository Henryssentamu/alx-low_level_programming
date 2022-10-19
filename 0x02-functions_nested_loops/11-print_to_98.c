#include "main.h"
/**
 *  print_to_98 -> prints natural numbers upto 98
 *  @n: integer
 */
void print_to_98(int n)
{
	n = 0;

	while (n <= 98)
	{
		_putchar(n);

		_putchar(',');

		_putchar(' ');

		n++;
	}
	_putchar('\n');
}
