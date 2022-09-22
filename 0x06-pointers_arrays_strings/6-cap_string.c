#include "main.h"

/**
 * cap_string - Capitalizes each word of a string
 * @s: pointer to the string
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	int x[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (is_lower(s[i]) == 1)
		s[i] == s[i] - 32;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (s[i] == x[j])
			{
				if (is_lower(s[i + 1]) == 1)
					s[i + 1] = s[i + 1] - 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

/**
 * is_lower - checks if a string is in lower case
 * @p: string to be checked
 * Return: 1 or 0
 */
int is_lower(char p)
{
	if (p >= 'a' && p <= 'z')
		return (1);
	else
		return (0);
}
