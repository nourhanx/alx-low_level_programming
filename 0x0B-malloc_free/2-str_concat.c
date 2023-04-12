#include "main.h"
#include <stdlib.h>

/**
 * str_concat - adds two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *new;
	int len1;
	int len2;
	int count = 0;
	int full_length;

	if (s1)
	{
		len1 = get_length(s1);
	}
	else
	{
		len1 = 1;
		s1 = "";
	}
	if (s2)
	{
		len2 = get_length(s2);
	}
	else
	{
		len2 = 1;
		s2 = "";
	}
	full_length = len1 + len2;
	new  = malloc((sizeof(char) * full_length) + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0 ; i < len1 ; i++)
	{
		new[i] = s1[i];
		count++;
	}
	for (i = 0; i < len2 ; i++)
	{
		new[count] = s2[i];
		count++;
	}
	return (new);
}

/**
 * get_length - returns length of string
 *
 * @str: string
 *
 * Return: int contain length of string
 */

int get_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
