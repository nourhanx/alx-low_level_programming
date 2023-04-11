#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if c is from the alphabet
 *
 * @c: single character
 *
 * Return: 1 if c is alphabet 0 otherwise
 */

int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else if (c <= 'Z' && c >= 'A')
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
			if (!_isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(argv[i]);
	}
	return (0);
}
