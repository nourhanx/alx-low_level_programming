#include "main.h"
#include <stdio.h>

/**
 * main - prints mult of two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if arguments are less than 3, 0 otherwise
 */

int main(int argc, char **argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
