#include "function_pointers.h"

/**
 * int_index - searches for an integer 
 * based on a certain compare function
 *
 * @array: ponter to an array of type int
 * @size: size of array
 * @cmp: compare function that the search is based on
 *
 * Return: (int) index of the integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(i))
			return (i);
	}
	return (-1);
}
