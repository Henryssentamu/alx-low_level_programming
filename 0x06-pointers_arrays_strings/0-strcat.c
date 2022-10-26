#include "main.h"
/**
 * *_strcat -> apends the src string to the dest string
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];

		len + 1;
	}
	dest[len] = '\0';

	return (dest);
}
