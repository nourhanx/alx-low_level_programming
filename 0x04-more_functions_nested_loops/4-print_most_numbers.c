#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0-9 except 2&4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
}
