#include "main.h"
#include <string.h>

/**
 * string_nconcat - Concatenates n bytes of a string to another
 * @s1: String one
 * @s2: string two
 * @n: number of bytes to be copied
 * Return: Pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x = strlen(s1) + n + 1, i = 0;
	unsigned int j = 0;
	char *res;

	if (s1 != NULL)
		x = strlen(s1) + n;
	else
		x = n;
	res = malloc(x);

	if (res == NULL)
		return (NULL);

	while (s1 != NULL && s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (n != 0 && s2 != NULL && j < n && s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
