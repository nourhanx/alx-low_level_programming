#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates a new string which is a dubplicate
 * of given string
 *
 * @str: string to be copied
 *
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	new = malloc(sizeof(char) * length);
	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
