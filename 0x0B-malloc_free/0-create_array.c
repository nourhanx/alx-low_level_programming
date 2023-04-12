#include "main.h"
#include <stdio.h>

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
	char* arr;

	arr = malloc(sizeof(Char) * size);
	int i;

	for (i = 0 ; i < size ; i++)
	{
		arr[i] = c;
	}
}
