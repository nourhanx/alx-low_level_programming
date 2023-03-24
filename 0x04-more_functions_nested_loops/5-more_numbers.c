#include "main.h"
#include <stdio.h>

/**
 * more_numbers - 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int count = 0;
	int i;

	while (count < 10)
	{
		for (i = 0; i < 15; i++)
		{
			printf("%d", i);
		}
		putchar('\n');
		count++;
	}
}
