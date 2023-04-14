#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and handles malloc fail
 *
 * @b: size of memory to be allocated (int)
 *
 * Return: pointer to allocated memory in case of success
 * otherwise returns (98)
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		return ((void *)98);
	return (a);
}
