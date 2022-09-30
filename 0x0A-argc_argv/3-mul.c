#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main program
 * @argc: argument count
 * @argv: Args
 * Return: Exit code
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
