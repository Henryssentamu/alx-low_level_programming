#include "lists.h"
/**
 * list_len -> number of elements in a linked list_t list.
 * @h: head
 * @newh: ponter
 * @i: int
 * Return: number of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	list_t *newh;

	newh = malloc(sizeof(list_t));
	h = newh;
	
	while (h != NULL)
	{
		newh = newh->next;
		i++;
	}
	return (i);
}
