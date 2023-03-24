#include "main.h"
#include <stdio.h>

/**
 * print_square - prinst a square of hashes
 *
 * @size: size of square
 */

void print_square(int size)
{
	if (size < 1)
	{
		_putchar(' ');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; i++)
			{
				_putchar('#');
			}
			_putchar(' ');
		}
	}
}
