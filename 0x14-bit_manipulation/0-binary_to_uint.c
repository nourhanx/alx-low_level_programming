#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if
 * there is one or more chars in b that is not 0 or 1
 * if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, size = 0;
	unsigned int n = 0;

	if (!b)
	{
		return (0);
	}

	while (b)
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		n += power(b[i], size);
		size--;
	}
	return (n);
}
