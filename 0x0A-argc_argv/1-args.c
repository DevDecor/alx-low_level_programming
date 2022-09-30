#include <stdio.h>

/**
 * main - Entry point
 * @argc: argv count
 * @argv: arguments
 * Return: Exit code
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
