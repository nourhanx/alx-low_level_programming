#include "3-calc.h"

/**
 * main - tests program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *op = argv[2];
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error");
		exit(98);
	}

	f = get_op_func(op);
	if (!f)
	{
		printf("Error");
		exit(98);
	}

	printf("%d\n", f(num1, num2));
	return (0);
}
