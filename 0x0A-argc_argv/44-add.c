#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * _isdigit - checks for a digit
 *
 * @c: integer
 *
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47  && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - prints sum of positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if numbers aren't positive, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int len = 0;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		while (argv[i][len] != '\0')
		{
			len++;
		}
		for (j = 0; j < len; j++)
		{
			if (!(_isdigit(argv[i][j]))) 
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
