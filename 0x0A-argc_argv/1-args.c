#include "main.h"
#include <stdio.h>

/**
 * main- prints number of arguments
 *
 * @argc : number of arguments
 * @argv : array of arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
