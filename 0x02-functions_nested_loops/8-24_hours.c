#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 *
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int i;
	int min;
	int hr;

	for (i = 0; i < 1440; i++)
	{
		min = i % 60;
		hr = i / 60;
		if (min < 10)
		{
			if (hr < 10)
			{
				printf("0%d:0%d", hr, min);
			}
			else
			{
				printf("%d:0%d", hr, min);
			}
		}
		else
		{
			if (hr < 10)
			{
				printf("0%d:%d", hr, min);
			}
			else
			{
				printf("%d:%d", hr, min);
			}
		}
		putchar('\n');
	}
}
