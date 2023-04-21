#include "variadic_functions.h"

/**
 * print_all - prints any variable type
 *
 * @format - a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *separator = ", ";

	va_start(list, format);


	while (format[i])
	{
		if (!format[i + 1])
			separator = "";
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(list, int));
				i++;
				break;
			case 'i':
				printf("%d, ", va_arg(list, int));
				i++;
				break;
			case 'f':
				printf("%f, ", va_arg(list, double));
				i++;
				break;
			case 's':
				printf("%s, ", va_arg(list, char*));
				i++;
				break;
			default:
				i++;
		}
	}
	printf("\n");
}
