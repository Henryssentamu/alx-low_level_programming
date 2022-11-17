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
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (action == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (action(array[i]) != 0)
			return (i);
	}
	return (-1);
}
