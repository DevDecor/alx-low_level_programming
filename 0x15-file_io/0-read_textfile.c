#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(sizeof(char) * letters);
	int count, op = open(filename, O_RDONLY);

	if (buff == NULL || filename == NULL || op < 0)
	{
		free(buff);
		return (0);
	}

	count = read(op, buff, letters);
	if (count == -1)
		return (0);
	buff[letters] = '\0';
	write(STDOUT_FILENO, buff, count);
	free(buff);
	return (count);
}
