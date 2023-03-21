#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lowercase
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
