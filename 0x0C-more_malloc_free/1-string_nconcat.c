#include "main.h"

/**
 * string_nconcat - adds a certain number of bytes from a string 
 * to another
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be added
 *
 * Returns: pointer two new string
 * if malloc fails returns (NULL)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0;
	int len2 = 0;
	char *new;

	if (s1 == NULL)
	{
		len1 = 1;
		s1 = "";
	}
	else
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 == NULL)
	{
		len2 = 1;
		s2 = "";
	}
	else
	{
		while (s2[len2] != '\0')
			len2++;
	}
	full_length = len1 + len2;

	new = malloc ((full_length * sizeof(char)) + 1);
	if (new == NULL)
		return (NULL);
	return (new);

	//WILL STILL UPDATE IT TO ADD ONLY N BYTES OF S2
