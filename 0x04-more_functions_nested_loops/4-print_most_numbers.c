#include "main.h"
/**
 * print_most_numbers -> print int and leave out 2 and 4
 */
void print_most_numbers(void)
{
	int b = 0;

	while (b <= 9)
	{
		if (b != 2 && b != 4)
		{
			_putchar(b + '0');
		}
		b++;
	}
	_putchar('\n');
}
