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
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 97)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
	else
	{
		printf("%d", 98);
	}
	putchar('\n');
}
