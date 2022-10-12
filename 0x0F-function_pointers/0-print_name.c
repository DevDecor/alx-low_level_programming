#include "function_pointers.h"
/**
 * print_name - Uses a callback to print a string
 * @name: string to be printed
 * @f: the callback
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
