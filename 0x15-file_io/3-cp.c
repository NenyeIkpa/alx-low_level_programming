#include "main.h"
#include <stdio.h>

/**
 * cp_file_to_file - copies content of one file to another
 *
 * @src_filename: source file
 * @dest_filename: destination file
 *
 * Return: int
 */

int cp_file_to_file(char *src_filename, char *dest_filename)
{
	int fd_dest, fd_src;
	char *buffer;
	int bytes_read, bytes_written;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);
	fd_src = open(src_filename, O_RDONLY);
	bytes_read = read(fd_src, buffer, 1024);
	if (fd_src == -1 || bytes_read == -1)
	{
		close(fd_src);
		if (close(fd_src) == -1)
			return (fd_src);
		return (98);
	}
	fd_dest = open(dest_filename, O_RDWR | O_TRUNC | O_CREAT, 0664);
	bytes_written = write(fd_dest, buffer, bytes_read);
	if (fd_dest == -1 || bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd_dest);
		close(fd_src);
		if (close(fd_dest) == -1)
			return (fd_dest);
		return (99);
	}
	return (0);
}

/**
 * main - check the code
 *
 * @ac: arg count
 * @av: list of arguments
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int n;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	n = cp_file_to_file(av[1], av[2]);
	if (n == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (n == 99)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[2]);
		exit(99);
	}
	else if (n == 0 || n == -1)
		exit(0);
	else
	{
		dprintf(2, "Error: Can't close fd %d\n", n);
		exit(100);
	}
	return (0);
}
