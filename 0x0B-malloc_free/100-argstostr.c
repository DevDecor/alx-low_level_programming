#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * argstostr - Concatenates the arguments to one string
 * @ac:  argument count
 * @av: aeguments array
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0, index = 0;
	char *p = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		count += strlen(av[i]);
		i++;
	}
	p = malloc(sizeof(char) * (count + ac + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			p[index] = av[i][j];
			index++;
			j++;
		}
		p[index] = '\n';
		index++;
	}
	p[++index] = '\0';
	return (p);
}
