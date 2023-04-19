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
	char *op = argv[2];
	int (*f)(int, int) = get_op_func(op);
	(void)argc;

	if (op[3] != '\0')
		printf("Error");

	else if (op[2] != '\0')
		*op = op[1];

	f = get_op_func(op);

	printf("%d", f(num1, num2));
	return (0);
}
