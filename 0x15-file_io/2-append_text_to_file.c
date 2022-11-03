#include "main.h"
/**
 * append_text_to_file - Appends text to a file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, x = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content)
		x = write(file, text_content, strlen(text_content));
	if (x == -1)
		return (-1);
	return (1);
}
