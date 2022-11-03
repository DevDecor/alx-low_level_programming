#include "main.h"
/**
 * create_file - Creates and write a file
 * @filename: name of the file to be created
 * @text_content: content to be written
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, x = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		x = write(file, text_content, strlen(text_content));
	}
	if (x == -1)
		return (-1);
	close(file);
	return (1);
}
