#include "main.h"
void reverse_array(int *a, int n)
{
	int i = 0;
	int half = n - 1;
	int buff;

	while (i < half)
	{
		buff = a[i];
		a[i] = a[half];
		a[half] = buff;
		i++;
		half--;
	}
}
