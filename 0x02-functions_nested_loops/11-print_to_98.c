#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 -> prints natural numbers upto 98
 *  @n: integer
 */
void print_to_98(int n)
{


	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);

		putchar(',');

		putchar(' ');
	}
	putchar('\n');
}
