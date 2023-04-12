#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars given size and given element
 *
 * @size: size of array
 * @c: character to fill the array
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		_putchar("failed to allocate memory");
		_putchar("\n");
	}


	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		_putchar("failed to allocate memory\n");
	}
	for (i = 0 ; i < size ; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
