#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 *
 * @n: integer number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 99)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 99)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("%d", 98);
	}
	putchar('\n');
}
