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
	char *separator = "", *s;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			if (!format[i + 1])
				separator = "\n";
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				i++;
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				i++;
				break;
			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				i++;
				break;
			case 's':
				s = va_arg(list, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				i++;
				break;
			default:
				i++;
			}
			separator = ", ";
		}
		printf("\n");
	}
}
