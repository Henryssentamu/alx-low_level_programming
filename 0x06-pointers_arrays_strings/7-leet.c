#include "main.h"
/**
 * leet ->  encodes a string
 * @n:pointer
 * Return: n
 */
char *leet(char *n)
{
	int i, j;

	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == find[j])
			{
				n[i] = replacer[j / 2];

				j = 9;
			}
		}
	}
	return (n);
}

