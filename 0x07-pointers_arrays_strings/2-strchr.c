#include <stddef.h>

/**
 * _strchr - finds character
 * @s: pointer to string
 * @c: Lost character
 * Return: pointer to the lost char in the string
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = (s + i);
			break;
		}
		i++;
	}
	return (ptr);
}
