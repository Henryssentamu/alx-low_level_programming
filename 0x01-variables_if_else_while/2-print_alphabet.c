#include<stdio.h>
/**
 * main -a program to print a to z
 * Return: 0
 */

int main(void)
{
	int i;
	
	for (i = 97; i < 123; i++)
	{
		putchar(i);

		putchar('\n');
	}
	return (0);
}
