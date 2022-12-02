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

	newh = malloc(sizeof(list_t));
	h = newh;
	if (newh->str == NULL)
		printf("[%d] %s", 0, "(nil)");
	else
	{
		while (newh->next != 0)
		{
			printf("%s %d", newh->str, newh->len);
			i++;
		}
	}
	return (i);
}
