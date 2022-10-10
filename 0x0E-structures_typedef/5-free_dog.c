#include "dog.h"
/**
 * free_dog - Frees spase allocated for a dog structure
 * @d: pointer to the dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
