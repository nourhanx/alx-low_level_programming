#include "dog.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * new_dog - creates a new struct dog
 *
 * @name: dog's name
 * @age: dog's age in years
 * @owner: dog's owner name
 *
 * Return: a variable of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	n = malloc((sizeof(char) * _strlen(name)) + 1);
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}

	o = malloc((sizeof(char) * _strlen(owner)) + 1);
	if (o == NULL)
	{
		free(d);
		free(n);
		return (NULL);
	}
	_strcpy(o, owner);
	_strcpy(n, name);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return(d);
}
