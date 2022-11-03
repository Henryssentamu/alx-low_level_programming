#include "main.h"
/**
 *  _sqrt_recursion -> square root of a number
 *  @n: int
 *  Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n));
}
