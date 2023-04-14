#include <math.h>
#include "search_algos.h"
int jump_search(int *array, size_t size, int value)
{
	int start = 0, jump = sqrt(size), end = jump - 1, i;

	if (!array || size < 1) return (-1);
	while ((end < (int) size) && end != start)
	{
		if (array[end] <= value)
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[end] < value)
		{
			start = end + 1;
			end = start + jump;
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
