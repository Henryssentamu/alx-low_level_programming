#include <stdio.h>
/**
 * main -Print 50 fibonacci numbers
 * Return: 0
 */
int maia(void)
{
	int a;

	unsigned long s1, s2, sum;

	s1 = 0;

	s2 = 1;

	for (a = 0; a < 50; a++)
	{
		sum = s1 + s2;

		printf("%lu", sum);

		s1 = s2;

		s2 = sum;

		if (a == 49)
		{
			printf("\n");
		}
		else
			printf(",");
	}
	return (0);
}
