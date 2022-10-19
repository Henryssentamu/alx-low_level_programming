#include "main.h"
/**
 * times_table -> the 9 times table
 */
void times_table(void)
{
	int a, b, c;

	for (b = 0; b <= 9; b++)
	{
		_putchar('0');

		_putchar(',');

		_putchar(' ');


		for (a = 0; a <= 9; a++)
		{
			c = a * b;

			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}

			else
			{
				_putchar(' ');
			}

			_putchar((c % 10) + '0');

			if (a < 9)
			{
				_putchar(',');

				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
