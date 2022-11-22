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

	if (size <= 0)
		return (-1);
	if (cmp)
	{
		for (i = i; i < size; i++)
		{
			if ((*cmp)(array[i]) == 90)
				return (i);
			return (-1);
		}
	}
}
