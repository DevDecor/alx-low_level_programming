#include "variadic_functions.h"
/**
 * print_numbers - Prints all the integers arguments passed to it
 * seperated by a delimeter
 * @separator: the delimeter
 * @n: number of integers to be printed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
