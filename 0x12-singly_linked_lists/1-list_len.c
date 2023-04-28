#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 *
 * h: a linked list_t list
 *
 * Return: length of elements in h
 */

size_t list_len(const list_h *h)
{
	size_t len = 0;

	if (!h)
		return (0);

	while (h)
	{
		len++;
		h = (*h).next;
	}
	return (len);
}
