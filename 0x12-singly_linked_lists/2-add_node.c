#include "lists.h"
/**
 * add_node -> add a node at the begining
 * @head: new node
 * @str: string
 * Return: the address of the new elemen
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;

	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
	{
		new->len = i;
		new->next = *head;
		*head = new;
	}
	return (*head);
}


