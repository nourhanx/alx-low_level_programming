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

	a = calloc(nmemb , size);
	if (a == NULL)
		return (NULL);
	return (a);
}
