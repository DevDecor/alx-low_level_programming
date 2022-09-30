#include <stdio.h>

/**
 * main - The program
 * @argc: command line arguments count
 * @argv: command line arguments
 * Return: The exit code
 */
int main(int argc, int *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
