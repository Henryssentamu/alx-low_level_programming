#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -> executes a function given as a parameter 
 * @array: pointer to int
 * @size_t: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
