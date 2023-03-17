#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random num to n and print whether it's positive or negative
 *
 * description: C program prints whether random n is +ve or -ve
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
