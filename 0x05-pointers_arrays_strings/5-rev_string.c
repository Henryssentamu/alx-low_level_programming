#include "main.h"
/**
 * rev_string -> it resers a sreing
 * @s: string
 */
void rev_string(char *s)
{
	char rs = s[0];

	int a = 0;

	int i;

	while (s[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		a--;
		rs = s[i];
		s[i] = s[a];
		s[a] = rs;
	}
}

