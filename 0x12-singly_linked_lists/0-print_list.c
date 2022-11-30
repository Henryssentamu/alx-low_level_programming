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

	while (h != NULL)
	{
		if (h->str == NULL)
			printf( "[%d],%s\n", 0, "(nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
