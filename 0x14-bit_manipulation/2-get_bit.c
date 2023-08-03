#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: unsigned long int number
 * @index: unsigned int index
 *
 * Return: the  bit at the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index < 0 || index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	return ((n & mask) ? 1 : 0);
}
