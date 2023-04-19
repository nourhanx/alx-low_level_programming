#include "function_pointers.h"

/**
 * print_name - prints a name using a certain format
 *
 * @name: a character array of name to be printed
 * @f: a pointer to function holding the printing format
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
