#include "dog.h"

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
	dog_t d;

	d = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	d.name = name;
	d.age = age;
	d.owner = owner;

