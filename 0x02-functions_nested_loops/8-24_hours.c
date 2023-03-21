#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 *
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int min = 0;
	int hr = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			putchar(hr / 10);
			putchar(hr % 10);
			putchar(':');
			putchar(min / 10);
			putchar(min % 10);
			putchar('\n');
		}
	}
}
