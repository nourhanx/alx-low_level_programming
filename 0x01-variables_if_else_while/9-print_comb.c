#include <stdio.h>

/**
 * main- prints all possible combinations of single-digit numbers
 *
 * Return: Alwaysa 0 {Success)
 */

int main(void)
{
	int ch  = '0';

	while (ch <= 9)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
