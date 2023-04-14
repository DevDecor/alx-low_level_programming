#include <math.h>
#include "search_algos.h"
int jump_search(int *array, size_t size, int value)
{
	int start = 0, jump = sqrt(size), end = jump, i;

	if (!array || size < 1) return (-1);
	printf("Value checked array[%d] = [%d]\n", 0, array[0]);
	if (array[0] == value) return (0);
	start++;
	while ((end < (int) size) && end != start)
	{
		if (array[end] <= value)
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		if (array[end] < value)
		{
			start = end;
			end = start + jump + 1;
		}
		else if (array[end] == value) return (end);
		else
		{
		printf("Value found between indexes [%d] and [%d]\n", start, end);
			for (i = start; i <= end; i++)
			{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value) return (i);
			}
			break;
		}
	}
	return (-1);
}
