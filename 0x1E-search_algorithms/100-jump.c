#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Searches an array of integers using
 * the jump search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: valuse to be searched
 * Return: index of the match
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, jump = (int) sqrt(size), end = jump, i;

	if (!array || size < 1)
		return (-1);
	while (end <= size - 1 && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end = start + jump;
	}
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	if (end >= size)
		end = size - 1;
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
