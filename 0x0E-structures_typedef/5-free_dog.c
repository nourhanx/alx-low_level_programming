#include "dog.h"

/**
 * free_dog - frees allocated memory to a struct dog
 *
 * @d: pointer to a struct dog to be free
 */

void free_dog(dog_t *d)
{
	free(d);
}
