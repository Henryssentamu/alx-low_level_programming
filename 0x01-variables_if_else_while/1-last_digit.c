#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -A program to print the last digit of a random number
 * Return: 0
 */
int main(void)
{
	int n;

	int x;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	x = n % 10;

	printf("%d Last digit of\n", x);

	if (x > 5)
	{
		printf("%d and is greater than 5\n", n);
	}

	else if (x < 6 && x != 0)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}

	else
	{
		printf("%d and is 0\n", n);
	}
	return (0);
}

