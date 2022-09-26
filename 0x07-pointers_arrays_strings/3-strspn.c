#include "main.h"

/**
 * _strspn - Find a substring of a string
 * @s: string
 * @accept: characters to count
 * Return: the count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, count = 0, b;

	while (s[i] != '\0')
	{
		j = 0;
		b = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				b = 1;
				break;
			}
			j++;
		}
		if (b == 0)
			break;
		else
			count++;
		i++;
	}
	return (count);
}
