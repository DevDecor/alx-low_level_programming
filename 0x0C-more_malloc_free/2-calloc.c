#include "main.h"

/**
 * _calloc - Allocates spaces
 * @nmemb: numbers of members
 * @size: size of members
 * Return: pointer to the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = 0;

	return (p);
}
