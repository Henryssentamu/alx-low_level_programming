#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index ->  searches for an integer.
 * @array: int
 * @size: int
 * @cmp: pointer function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
