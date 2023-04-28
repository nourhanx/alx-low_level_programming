#include "lists.h"

/**
 * list_t - adds a new node at the end of a list_t list.
 *
 * @head: double pointer to first node in list_t
 * @str: str of node to be added at the end
 *
 * Return: address of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current = new;
	unsigned int len = 0;

	if (!new || !head)
		return (NULL);

	while (str[len])
		len++;

	(*new).str = strdup(str);
	(*new).len = len;
	(*new).next = NULL;
	
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	else
	{
		current = *head;
		while ((*current).next)
		{
			current = (*current).next;
		}
		(*current).next = new;
		return (new);
	}
}
