#include "main.h"
#include <stdio.h>

/**
 * _abs - compute absolute value of an integer
 *
 * @r: integer number
 *
 * Return: absolute of r
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
