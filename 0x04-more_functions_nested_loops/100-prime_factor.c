#include <stdio.h>
#include <math.h>
/**
 * main - largest prime number
 * Return: 0
 */
int main(void)
{
	int a, b;

	long number = 612852475143;

	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			b = number / a;
		}
	}
	printf("%d\n", b);

	return (0);
}
