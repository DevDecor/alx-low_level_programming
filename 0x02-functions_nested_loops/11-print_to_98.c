
#include "main.h"
#include "6-abs.c"
/**
 * print_to_98 - check the code
 * @n: starts from
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i != n)
				_putchar(' ');
			if (i < 0)
				_putchar('-');
			print_num(_abs(i));
			if (i != 98)
				_putchar(',');
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			if (i != n)
				_putchar(' ');
			print_num(i);
			if (i != 98)
				_putchar(',');
		}
	}
	_putchar('\n');
}

/**
 * print_num - Prints nums with Putchar
 * @n: number to be printed
 * Return: Nothing;
 */
void print_num(int n)
{
	if (n > 99)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + (n % 100) / 10);
		_putchar('0' + (n % 10));
	}
	else if (n > 9)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else
		_putchar('0' + n);
}
