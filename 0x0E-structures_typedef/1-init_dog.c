#include "dog.h"
/**
 * init_dog - Function that initializes a dod structure
 * @d: the dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
