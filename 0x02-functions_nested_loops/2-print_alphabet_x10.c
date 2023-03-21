#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int times = 1;
	char ch;

	while (times <= 10)
	{
		ch = 'a';

		while (ch < 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		times++;
	}
}
