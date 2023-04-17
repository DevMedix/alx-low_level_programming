#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct declaraction
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->owner = strdup(owner);
	d->age = age;
}
