#include "lists.h"
/**
 * myStartupFun - runs before main
 * Return: nothing
 */
void (__attribute__ ((constructor)) myStartupFun)(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
