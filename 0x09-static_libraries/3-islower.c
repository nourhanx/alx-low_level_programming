#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if c is lowercase
 *
 * @c: single letter input
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
