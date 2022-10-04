#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Allocates space for a dummy
 * two dimentional aray
 * @width: width
 * @height: height
 * Return: pointer to the string
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			if (p[i] == NULL)
			{
				while (i >= 0)
				{
					free(p[i]);
					i--;
				}
				free(p);
				return (NULL);
			}
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
