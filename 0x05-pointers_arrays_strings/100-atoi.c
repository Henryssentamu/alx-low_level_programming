#include "main.h"
/**
 *  _atoi -> convert a string to an integer
 *  @s: int
 *  Return: value
 */
int _atoi(char *s)
{
	int a, b, n, m;

	a = n = 0;

	m = 1;

	while ((*(s + a) < '0' || *(s + a) > '9') && (*(s + a) != '\0'))
	{
		if (*(s + a) == '-')
		{
			m *= -1;
		}
		a++;
	}
	b = a;

	while ((*(s + b) >= '0') && (*(s + b) <= '9'))
	{
		n = n * 10 + m * (*(s + b) - '0');
		b++;
	}
	return (n);
}
