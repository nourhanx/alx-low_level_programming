#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int times = 1;

	while (times <= 10)
	{
		while (ch < 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		times++;
	}
}
