#include <stdio.h>

int main(int argc, int *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
