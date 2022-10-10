#include "dog.h"
#include "1-init_dog.c"
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	dog_t *p = &d;
	init_dog(p, name, age, owner);
	if (p == NULL)
		return (NULL);
	return (p);
}
