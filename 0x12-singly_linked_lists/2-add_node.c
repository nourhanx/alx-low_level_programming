#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to first node in list_t h
 * @str: node to be added at beginning
 *
 * Return: address of new element at success
 * NULL at failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	(*new).str = (char*)str;
	(*new).len = len;
	(*new).next = *head;
	*head = new;

	return (*head);
}
