#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */

int main(void)
{

	int j;


	for (j = 0; j < 10; j++)
	{
		int putchar((j % 10) + '0');
	}
	putchar('\n');

	return (0);
}

