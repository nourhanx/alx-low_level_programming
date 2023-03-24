#include "main.h"
#include <stdio.h>

/**
 * print_line - prints "_" n times
 *
 * @n: integer number of times "_" should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
