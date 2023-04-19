#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets remainder of division of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
