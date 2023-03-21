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
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			putchar('\n');
			min++;
		}
		hr++;
	}
}
