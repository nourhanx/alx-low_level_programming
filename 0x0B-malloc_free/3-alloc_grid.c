#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of the number 0
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the array, or NULL if malloc fails
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
