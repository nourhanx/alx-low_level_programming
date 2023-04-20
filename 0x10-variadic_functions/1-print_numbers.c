#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers taken as argument
 *
 * @separator: the string to be printed between the numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int x;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		printf("%d%s", x, separator);
	}
}
