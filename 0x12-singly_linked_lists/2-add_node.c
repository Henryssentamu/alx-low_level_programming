#include "lists.h"
/**
 * add_node -> add a node at the begining
 * @head: new node
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;

	if (head == NULL)
	{
		return (0);
		exit(1);
	}
	else
	{
		new = malloc(sizeof(list_t));
		while (new != NULL)
		{
			dup = strdup(str);
			new->str = dup;
			new->next =*head;
			*head = new;
		}
	}
	return (new);
}
