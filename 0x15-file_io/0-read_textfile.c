#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX STDOUT
 * @filename: file being read
 * @letters: number of letters to be printed
 *
 * Return: 1 on success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fp, w, t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t  = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fp);
	return (w);
}
