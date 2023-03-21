#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 *
 * @n - number
 *
 * Return:
 * 1 if n +ve
 * 0 if n zero
 * -1 if n -ve
 */

int print_sign(int n)
{
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
