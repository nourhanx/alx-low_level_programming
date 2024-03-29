#include "function_pointers.h"

/**
 * array_iterator - excutes a function given as a paramter
 * on each element of an array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action: pounter to function to be excuted on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;
	if (array && action && size)
	{

		for (i = 0; i < size ; i++)
			action(array[i]);
	}
}
