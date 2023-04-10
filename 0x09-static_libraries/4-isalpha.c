#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if c is from the alphabet
 *
 * @c: single character
 *
 * Return: 1 if c is alphabet 0 otherwise
 */

int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
