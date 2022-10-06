#include "main.h"

/**
 * array_range - allocate space for an array
 * @min: minimum of the range
 * @max: maximum of the range
 * Return: pointer to an array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
