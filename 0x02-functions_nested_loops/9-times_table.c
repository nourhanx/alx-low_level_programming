#include "main.h"
#include <stdio.h>

/**
 * times_table - prints time table of 9
 */

void times_table(void)
{
	int x;
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;

			if (x < 10)
			{
				printf(" %d, ", x);
			}
			else
			{
				printf("%d, ", x);
			}
		}
		putchar('\n');
	}
}
