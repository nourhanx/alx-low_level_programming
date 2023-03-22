#include "main.h"
#include <stdio.h>

/**
 * times_table - prints time table of 9
 */

void times_table(void)
{
	int x;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			x = i * j;
			printf("%d, ", x);
		}
		putchar('\n');
	}
}
