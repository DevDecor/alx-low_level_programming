#include "search_algos.h"
/**
 * linear_search - Implimenting the linear search algorithm
 * @array: the array to search
 * @size: length of the array
 * @value: value to be searched
 * Return: index of the found element of -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
