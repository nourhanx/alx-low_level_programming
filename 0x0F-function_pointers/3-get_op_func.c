#include "3-calc.h"

/**
 * get_op_func - selects operation from user input
 *
 * @s: char from user 
 *
 * Return: pointer to function of the operation to be carried out
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (s == ops[i].op)
			return (ops[i].f);
	}
	return (NULL);
}
