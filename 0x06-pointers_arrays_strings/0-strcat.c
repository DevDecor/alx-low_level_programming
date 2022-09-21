#include "main.h"

/**
 * _strcat - Concatenate strings
 * @dest: destination
 * @src: source
 * Return: Pointer to the source
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (src[i] != '\0')
	{
		dest[count] = src[i];
		i++;
		src++;
	}

	dest[count] = '\0';

	return (dest);
}
