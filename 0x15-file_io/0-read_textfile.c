#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[];
	ssize_t count, op = open(filename, O_RDONLY), x;

	if (buff == NULL || filename == NULL || op < 0)
	{
		return (0);
	}

	count = read(op, buff, letters);
	if (count == -1)
	{
		return (0);
	}
	buff[letters] = '\0';
	x = write(STDOUT_FILENO, buff, count);
	if (x == -1 || x != count)
		return (0);
	return (x);
}
