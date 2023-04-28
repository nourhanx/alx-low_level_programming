#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: list to be printed
 *
 * Return: size of printed list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (!h)
		return (0);

	while (h)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", (*h).len);
			printf("%s\n", (*h).str);
		}
		h = (*h).next;
		count++;
	}
	return (count);
}
