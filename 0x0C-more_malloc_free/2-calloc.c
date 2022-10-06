#include "main.h"

/**
 * _calloc - Allocates spaces
 * @nmemb: numbers of members
 * @size: size of members
 * Return: pointer to the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	return (p);
}
