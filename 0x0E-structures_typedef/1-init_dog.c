#include "dog.h"

/**
 * init_dog - initializes a struct dog
 *
 * @d: a pointer to a struct dog
 * @name: dog's name
 * @age: dog's age in years
 * @owner: name of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
