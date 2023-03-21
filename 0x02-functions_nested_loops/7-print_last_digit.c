#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints units of number
 *
 * @r: integer number
 *
 * Return: the units value of r
 */

int print_last_digit(int r)
{
	int u;

	u = (r % 10);

	if (u < 0)
	{
		u = -u;
	}

	_putchar(u + '0');
	return (u);
}
