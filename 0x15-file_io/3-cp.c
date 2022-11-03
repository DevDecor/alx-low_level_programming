#include "main.h"

#define MAXSIZE 1024


/**
 * __exit - prints error messages and exits with exit number
 *
 * @error: either the exit number or file descriptor
 * @s: name of either file_in or file_out
 * @fd: file descriptor
 *
 * Return: 0 on success
*/
int __exit(int error, char *s, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - create a copy of file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 for success.
*/
int main(int argc, char *argv[])
{
	int file_in, file_out, read_in, write_out, close_in;
	char buff[MAXSIZE];

	if (argc != 3)
		__exit(97, NULL, 0);

	file_in = open(argv[1], O_RDONLY);
	if (file_in == -1)
		__exit(98, argv[1], 0);

	file_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (file_out == -1)
		__exit(99, argv[2], 0);

	while ((read_in = read(file_in, buff, MAXSIZE)) != 0)
	{
		if (read_in == -1)
			__exit(98, argv[1], 0);

		write_out = write(file_out, buff, read_in);
		if (write_out == -1)
			__exit(99, argv[2], 0);
	}
	close_in = close(file_in);
	if (close_in == -1)
		__exit(100, NULL, file_in);
	if (close(file_out) == -1)
		__exit(100, NULL, file_out);
	return (0);
}
