#include <stdio.h>
/**
 * interpolation_search - Searches an array of integers using
 * the interpolation search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: valuse to be searched
 * Return: index of the match
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	int probe;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		probe = array[pos];

		printf("Value checked array[%ld] = [%d]\n", pos, probe);

		if (probe == value)
			return (pos);

		if (probe < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
