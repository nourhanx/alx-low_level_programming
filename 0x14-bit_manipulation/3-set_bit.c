#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: unsigned long int
 * @index: index to be set
 *
 * Return: 1 if successfull, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;

	*n |= mask;

	return (1);
}

