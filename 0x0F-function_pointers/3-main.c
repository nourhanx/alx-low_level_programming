#include "3-calc.h"

/**
 * main - tests program
 *
 * @argc - number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*f)(int, int) = get_op_func(argv[2]);

	printf("%d", f(num1, num2));
	return (0);
}
