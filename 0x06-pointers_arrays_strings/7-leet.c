#include "main.h"
/**
 * conv ->  encodes a string
 * @n:pointer
 * Return: n
 */
char *conv(char *n)
{
	int i, j;

	char l1[] = "aAeEoOtTlL";

	char l2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == l1[j])
			{
				n[i] = l2[j];
			}
		}
	}
	return (n);
}

