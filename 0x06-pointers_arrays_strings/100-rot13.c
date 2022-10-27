#include "main.h"
/**
 *  rot13 -  encodes a string using rot13
 *   @n:the string targeted
 *   Return: returns the encoded string
 */
char *rot13(char *n)
{
	int index1 = 0, index2 = 0;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(n + index1) != 0)
	{
		for (index2 = 0; index2 <= 52; index2++)
		{
			if (*(n + index1) == alpha[index2])
			{
				*(n + index1) = alpha2[index2];

				break;
			}
		}
		index1++;
	}
	return (n);
}
