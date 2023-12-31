#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: Address to the name of the file
 * @text_content: string to add to the end of the file
 *
 * Return: 1 if the file exits
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	r = write(fd, text_content, len);

	if (fd == -1 || r == -1)
		return (-1);

	close(fd);

	return (1);
}
