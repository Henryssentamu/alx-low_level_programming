#include "main.h"
/**
 *  _puts_recursion -> prints a string
 *  @s: pointer as a string
 *  Return: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
