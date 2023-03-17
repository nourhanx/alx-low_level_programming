#include <stdio.h>

/**
 * main- prints number 0-9
 * only using putchar and no char type
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar((int)x);
		x++;
	}
	putchar('\n');
	return (0);
}
