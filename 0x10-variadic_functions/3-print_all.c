#include "variadic_functions.h"
/**
 * print_int - Prints an integer
 * @a: interger to be printed
 * Return: nothing
 */
void print_int(va_list a)
{
	int x = va_arg(a, int);

	printf("%d", x);
}

/**
 * print_float - Prints a float
 * @a: float to be printed
 * Return: nothing
 */
void print_float(va_list a)
{
	float x = va_arg(a, double);

	printf("%f", x);
}

/**
 * print_char - Prints a character
 * @a: Character to be printed
 * Return: nothing
 */
void print_char(va_list a)
{
	char x = va_arg(a, int);

	printf("%c", x);
}

/**
 * print_string - Prints a string
 * @a: string to be printed
 * Return: nothing
 */
void print_string(va_list a)
{
	char *x = va_arg(a, char *);

	if (x == NULL)
		printf("(nil)");
	else
		printf("%s", x);
}

/**
 * print_all - a function that prints anything
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Description: If any argument not of type char,
 *              int, float or char * is ignored
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		/**
		 * 4 equals to the number of funcs present
		 * so if j is less than four and our current
		 * format is not equal to format in funcs
		 * then j becomes j + 1
		 */
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
