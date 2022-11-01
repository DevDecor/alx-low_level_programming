#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(letters + 1);
	int count, op = open(filename, O_RDONLY);

	if (buff == NULL || filename == NULL || op < 0)
		return (0);

	count = read(op, buff, letters);
	write(0, buff, count);
	return (count);
}
