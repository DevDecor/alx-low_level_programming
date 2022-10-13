#include "variadic_functions.h"
/**
 * print_strings - Prints all the integers arguments passed to it
 * seperated by a delimeter
 * @separator: the delimeter
 * @n: number of integers to be printed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *sp;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sp = va_arg(p, char *);
		if (sp == NULL)
			printf("(nil)");
		else
			printf("%s", sp);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
