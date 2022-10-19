#include <stdio.h>
/**
 * main - entry
 * Return:0
 */
int main(void)
{

	int a, sum;

	for (a = 0; a <= 1024; a++)
	{
		if ((a % 3) == 0 || (a % 15) == 0)
		{
			sum += 1;
		}
	}
	printf("%d", sum);

	return (0);
}
