#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Find a substring of a string
 * @s: string
 * @accept: characters to count
 * Return: the count
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
