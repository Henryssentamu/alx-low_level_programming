#include "main.h"
/**
 * _strpbrk -> searches a string for any of a set of bytes
 * @s: pointer as argument
 * @accept: pointer as argument
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (s[j])
	{
		i = 0;

		while (accept[i])
		{
			if (s[j] == accept[i])
			{
				s += j;

				return (s);
			}
			i++;
		}
		j++;
	}
	return ('\0');
}
