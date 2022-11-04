#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -> prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: pointer of array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc < 2)
	{
		printf(" Error \n");

		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("sum = %d\n", sum);
	return (0);
}
