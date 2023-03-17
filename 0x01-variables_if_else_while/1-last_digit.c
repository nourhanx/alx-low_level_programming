#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of randomly generated number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstdgt = n % 10;
	if (lstdgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstdgt);
	}
	else if (lstdgt < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdgt);
	}
	else if (lstdgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdgt);
	}
	return (0);
}
