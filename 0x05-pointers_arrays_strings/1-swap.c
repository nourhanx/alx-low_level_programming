#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: pointer to first integer
 * @b: pointer to second integer
 */

void swap_int(int *a, int *b)
{
	int *tmp = 0;
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
