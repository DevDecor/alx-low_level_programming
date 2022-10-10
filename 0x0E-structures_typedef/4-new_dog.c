#include "dog.h"
#include "1-init_dog.c"
/**
 * new_dog - Create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: pointer to the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	init_dog(p, name, age, owner);
	return (p);
}
