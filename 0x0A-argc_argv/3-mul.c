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
	int i, mult = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
			mult *= atoi(argv[i]);
		printf("%d", mult);
	}
	return (0);
}
