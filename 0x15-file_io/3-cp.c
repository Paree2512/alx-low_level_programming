#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * err_file - function that checks if files can be opened
 * @file_to: file_to
 * @file_from: file_from
 * @argv: Arguments vector
 *
 * Return: None
 */

void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks the code
 * @argc: number of arguments sent to program
 * @argv: pointer to arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, buf, 1024);
		if (n == -1)
			err_file(-1, 0, argv);
		w = write(file_to, buf, n);
		if (w == -1)
			err_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
