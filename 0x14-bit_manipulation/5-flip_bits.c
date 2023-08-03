#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *  need to flip to get from one number to another.
 *
 *  @n: unsigned long int
 *  @m: unsigned long int
 *
 *  Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;
	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
