#include "main.h"

/**
 * _memcpy - copies buffer
 * @dest: destination
 * @src: source
 * @n: number of things to be copied
 * Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
