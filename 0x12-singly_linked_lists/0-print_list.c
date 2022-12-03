#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list ->  that prints all the elements of a list_t list.
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
