#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int file, x = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (file == -1)
		return (-1);
	x = write(file, text_content, strlen(text_content));
	if (x == -1)
		return (-1);
	return (1);
}
