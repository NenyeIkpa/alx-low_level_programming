#include "main.h"
#include <stdio.h>

/**
 * close_file - closes a file
 *
 * @file: file to close
 *
 */

void close_file(int file)
{
	int res;

	res = close(file);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - copies content of one file to another
 *
 * @ac: argument count
 * @av: list of arguments
 *
 * Return: int
 */

int main(int ac, char *av[])
{
	int fd_src, fd_dest;
	char buffer[1024];
	int bytes_read, bytes_written;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(av[1], O_RDONLY);
	bytes_read = read(fd_src, buffer, 1024);
	fd_dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_src == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (fd_dest == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			return (99);
		}
		bytes_read = read(fd_src, buffer, 1024);
		fd_dest = open(av[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);
	close_file(fd_src);
	close_file(fd_dest);
	return (0);
}
