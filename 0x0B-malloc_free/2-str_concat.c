#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - Concatenates string
 * @s1: string one
 * @s2:  string two
 * Return: pointer to the result string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0;
	char *p;

	if (s1 != NULL)
		i = strlen(s1);
	if (s2 != NULL)
		j = strlen(s2);

	p = malloc(sizeof(char) * (i + j) + 1);

	if (p == NULL)
		return (NULL);

	while (s1 != NULL && *s1 != '\0')
	{
		p[len] = *s1;
		len++;
		s1++;
	}
	while (s2 != NULL && *s2 != '\0')
	{
		p[len] = *s2;
		len++;
		s2++;
	}
	p[len] = '\0';
	return (p);
}
