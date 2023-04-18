#include "dog.h"

/**
 * init_dog - initializes a struct of type dog
 *
 * @d: a struct of type dog
 * @name: dog's name
 * @age: dog's age in years
 * @owner: name of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
