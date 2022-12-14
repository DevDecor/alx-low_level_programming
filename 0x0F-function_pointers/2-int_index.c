#include "function_pointers.h"
/**
 * int_index - Finds an element with a callback function
 * @array: the array to be searched
 * @size: size of the array
 * @cmp: the callback function
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
