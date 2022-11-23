#include "variadic_functions.h"

#include <stdarg.h>

#include <stdio.h>
/**
 *  sum_them_all - Entry Point
 *  variadic inputs
 *  Return: sum
 *  @n:number of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	return (sum);
}
