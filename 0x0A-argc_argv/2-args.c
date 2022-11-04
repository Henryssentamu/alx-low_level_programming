#include "main.h"
#include <stdio.h>
/**
 * main -> prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: pointer of array
 * Return: integer
 */
int main(int argc, char * argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	return (0);
}