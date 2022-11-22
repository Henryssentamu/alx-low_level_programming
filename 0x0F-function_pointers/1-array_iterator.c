#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -> executes a function given as a parameter
 * @array: pointer to int
 * @size: int
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
