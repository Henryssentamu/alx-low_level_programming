#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list ->  that prints all the elements of a list_t list.
 * @h: head of the linked list
 * @newh:node
 * @i:nodes
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *newh;

	size_t i = 0;

	h = newh;
	if (newh->str == NULL)
		printf("[%d] %s", 0, "(nil)");
	while (newh != NULL)
	{
		printf("%s %d  %d", newh->str, newh->len, i);

		newh = newh->next;
		i++;
	}

}
