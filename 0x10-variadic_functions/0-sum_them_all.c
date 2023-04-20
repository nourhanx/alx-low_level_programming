#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 *
 * @n: first integer arg
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
