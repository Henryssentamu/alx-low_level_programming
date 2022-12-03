#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list ->  that prints all the elements of a list_t list.
 * @h: head of the linked list
 * @i:nodes
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h->str == NULL)
		printf("[%d],%s", 0, "(nil)");
	while (h->next != NULL)
	{
		printf("%s %d\n", h->str, h->len);
		h = h->next;
		i++;
	}
	return (i);
}
