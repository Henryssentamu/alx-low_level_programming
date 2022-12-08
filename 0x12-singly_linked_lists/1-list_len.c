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
	size_t i = 1;
	
	if (h == NULL)
	{
		return (-1);
		exit(1);
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
