#include "main.h"
/**
 * print_bin - Prints binary digits from 1
 * @n: the number to be converted
 * Return: nothing
 */
void print_bin(unsigned long int n)
{
	if (n != 0)
	{
		print_bin(n >> 1);
		_putchar('0' + (n & 1 ? 1 : 0));
	}
}
/**
 * print_binary - Prints a binary digit from 0
 * @n: digit
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_bin(n);
}
