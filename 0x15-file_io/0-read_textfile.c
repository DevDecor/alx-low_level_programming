#include "main.h"
/**
 * read_textfile - Reads text file and write to stdout
 * @filename: The name of the file
 * @letters: byte count
 * Return: the written byte count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc((sizeof(char) * letters) + 1);
	ssize_t count, op = open(filename, O_RDONLY), x;

	if (buff == NULL || filename == NULL || op < 0)
	{
		free(buff);
		return (0);
	}

	count = read(op, buff, letters);
	if (count == -1)
	{
		free(buff);
		return (0);
	}
	buff[letters] = '\0';
	x = write(STDOUT_FILENO, buff, count);
	if (x == -1 || x != count)
		return (0);
	free(buff);
	close(op);
	return (x);
}
