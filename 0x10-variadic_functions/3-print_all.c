#include "variadic_functions.h"

/**
 * print_all - prints any variable type
 *
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *separator = ", ";
	char *s;

	va_start(list, format);

	while (format[i])
	{
		if (!format[i + 1])
			separator = "\n";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), separator);
			i++;
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), separator);
			i++;
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), separator);
			i++;
			break;
		case 's':
			s = va_arg(list, char*);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, separator);
			i++;
			break;
		default:
			i++;
		}
	}
}
