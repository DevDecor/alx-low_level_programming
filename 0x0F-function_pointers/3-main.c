#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: status code
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int), d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	d = p(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", d);
	return (d);
}
