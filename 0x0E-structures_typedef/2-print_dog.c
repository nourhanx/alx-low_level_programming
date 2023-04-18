#include "dog.h"

/**
 * print_dog - prints members of struct dog
 *
 * @d: pointer to a struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %d\n", d->name, d->age, d->owner);
	}
	else
		return;
}
