#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big Endian 1 if little Endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (!(*ptr == 1));
}
