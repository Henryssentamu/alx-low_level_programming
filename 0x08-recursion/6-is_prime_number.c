#include "main.h"
/**
 * is_prime_number -> print a prime number
 * @n: int as argument
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (0);
	if (n / 1 != n && n % 2 == 0)
		return (0);
	return (1);
	is_prime_number(n);
}
