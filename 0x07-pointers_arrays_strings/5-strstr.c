#include "main.h"
#include "2-strchr.c"
#include <stddef.h>

/**
 * _strstr - Return the pointer to a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = _strchr(haystack, *(needle + 0));
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(needle + i) == '\0')
			return (p);
		if (*(p + i) == *(needle + i))
			i++;
		else
		{
			return (_strstr(p + 1, needle));
		}
	}
	return (NULL);
}
