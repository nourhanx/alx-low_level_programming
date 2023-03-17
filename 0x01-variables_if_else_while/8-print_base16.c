#include <stdio.h>

/**
 * main- prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	ch = 'a';

	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
