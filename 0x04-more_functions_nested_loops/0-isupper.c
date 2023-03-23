#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c : ascii for character
 * Return: 1 if c uppercase 0 if lowercase
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
