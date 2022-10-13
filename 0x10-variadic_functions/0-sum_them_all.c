#include "variadic_functions.h"
/**
 * sum_them_all - sums a particular number of integers
 * @n: number of integers
 * Return: the sum of all the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	return (sum);
}
