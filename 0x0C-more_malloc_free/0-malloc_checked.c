#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Allocates some bytes in the memory
 * @b: Size allocated
 * Return: pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
