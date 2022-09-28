#include "main.h"
int _root(int prev, int root);

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	int x = _root(1, n);

	return (x);
}

/**
 * _root - It returns the value of square root of n.
 * @prev: an input integer
 * @n: the prev
 * Return: The square root of n
 */

int _root(int prev, int n)
{
	int x;

	if (prev * prev == n)
		return (prev);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (prev <= (n / 2) + 1)
		x = _root(prev + 1, n);
	else
		return (-1);
	return (x);
}
