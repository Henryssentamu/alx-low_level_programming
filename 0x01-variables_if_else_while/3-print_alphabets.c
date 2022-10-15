#include <stdio.h>
/**
 * main -printing both capital and small alpherbet
 * Return: 0
 */
int main(void)
{
	int i, k;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	for (k = 65; k < 91; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
