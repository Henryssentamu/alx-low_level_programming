#include "main.h"
/**
 * print_square -> draws square
 * @size: integer
 */
void print_square(int size)
{
	int i, a;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
