#include "main.h"
/**
 *reverse_array -> reverses the content of an array
 * @a: int
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;

		j = a[i];

		a[i] = a[n];

		a[n] = j;
	}
}

