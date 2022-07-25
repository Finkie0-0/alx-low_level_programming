#include "main.h"
/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success else -1 if file creation fails
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	w = write(o, text_content, len);
	close(o);
	if (w < 0)
		return (-1);
	return (1);
}
