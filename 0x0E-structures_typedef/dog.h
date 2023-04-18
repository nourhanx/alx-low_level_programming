#ifndef FILE_MAIN
#define FILE_MAIN

#include <stdio.h>
/**
 * struct dog - represents a dog
 *
 * @name: name of the dog
 * @age: age of the dog in years
 * @owner: the dog's owner name
 *
 * Descripton: just a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
