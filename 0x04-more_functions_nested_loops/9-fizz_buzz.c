#include <stdio.h>
/**
 * main -prints fizzbuzz game
 * Return: integer
 */
int main(void)
{
	int i;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		printf(" ");

		if (i % 3 == 0)
		{
			printf("Fizz");
		}

		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && 1 % 5 != 0)
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}


