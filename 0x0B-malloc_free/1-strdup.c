#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - Duplicates string
 * @str: the string
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int i = strlen(str);
	char *new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
		return (NULL);
	while (i > 0)
	{
		new[i] = str[i];
		i--;
	}
	new[i] = str[i];
	return (new);
}
