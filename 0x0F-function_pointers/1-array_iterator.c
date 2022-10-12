#include "function_pointers.h"
/**
 * array_iterator - iterates an array with a callback
 * @array: pointer tho the array
 * @size: length of the array
 * @action: the callback
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for(i = 0; i < size; i++)
		action(array[i]);
}
