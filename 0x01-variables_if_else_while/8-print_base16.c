#include<stdio.h>
/**
 * main -hexagonal numbers
 * Return: 0
 */
int main(void)
{
	char a = '0';

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

