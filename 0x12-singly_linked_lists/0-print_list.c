#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - structure
 * @h: argument
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node  = 0;

	if (h->str == NULL)
		printf("0");
	else
	{
		while (h != 0)
		{
			printf("%s", h->str);
			printf("%d", h->len);
			node++;
			h = h->next;
		}
	}
	return (node);
}

