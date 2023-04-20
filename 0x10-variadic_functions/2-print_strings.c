#include "variadic_functions.h"

/**
 * print_strings - prints any number of given strings
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(list, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s%s", separator, s);
	}
	s = va_arg(list, char*);
	printf("%s\n", s);

	va_end(list);
}
