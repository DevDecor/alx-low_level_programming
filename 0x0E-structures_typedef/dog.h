#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct dog - A dogs structure
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Nmae of the owner
 * Description: The structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Dog type
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
