#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 -> prints natural numbers upto 98
 *  @n: integer
 */
void print_to_98(int n)
{
	n = 0;

	while (n <= 98)
	{
		printf("%d",n);

		putchar(',');

		putchar(' ');

		n++;
	}
	putchar('\n');
}
