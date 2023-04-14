#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: pointer to array in case of success
 * NULL in case of calloc fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = calloc(nmemb , size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		a[i] = 0;

	return (a);
}
