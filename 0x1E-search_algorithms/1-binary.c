#include "search_algos.h"
/**
 * binary_search - Impliments the binary search algorithm
 * @arr: sorted array to be searched
 * @size: lenth of the array
 * @value: Value to be searched
 * Return: Index of the first ucccurrence of value or -1
 */
int binary_search(int *arr, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;

	while (left <= right)
	{
		i = left;
		printf("Searching in array: ");
		while (i < right + 1)
		{
			printf("%d", arr[i]);
			if (i != right)
				printf(", ");
			i++;
		}
		printf("\n");
		mid = left + (right - left) / 2;
		if (arr[mid] == value)
			return (mid);
		else if (arr[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
