#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -> prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: pointer of array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i] == 0)
		{
			printf("Error\n");

			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("sum = %d\n", sum);
	return (0);
}
