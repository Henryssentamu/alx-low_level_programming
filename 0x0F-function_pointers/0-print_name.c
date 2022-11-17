#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -> prints a name
 * @name: string argument
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	if (name[i] != '\0')
		f(name);
}
