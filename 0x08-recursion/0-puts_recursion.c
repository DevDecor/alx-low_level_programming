#include "main.h"

/**
 * _puts_recursion - Prints a string with recursion
 * @s: the string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) != '\0')
		_puts_recursion(s + 1);
}
