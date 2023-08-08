#include "main.h"
#include <stdio.h>

/**
 * main - copies content of one file to another
 *
 * @ac: argument count
 * @av: list of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
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
	if (fd_src == -1 || bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	bytes_written = write(fd_dest, buffer, bytes_read);
	if (fd_dest == -1 || bytes_written == -1 || bytes_written != bytes_read)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[2]);
		return (99);
	}
	if (close(fd_src) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}
