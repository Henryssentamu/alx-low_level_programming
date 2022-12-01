#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - structure
 * @h: argument
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, "(nil)");
		else
		{
			while (h != 0)
			{
				printf("%s %d\n", str, len);
				h = h->next;
				nodes++;
			}
		}
	}
	return (nodes);
}
