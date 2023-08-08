#include "main.h"
#include <stdio.h>
#include <errno.h>

/**
 * main - copies content of one file to another
 *
 * @ac: argument count
 * @av: list of arguments
 *
 * Return: int
 */

void print_error_and_exit(int code, const char *message) {
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(code);
}

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read;

    if (argc != 3) {
        print_error_and_exit(97, "Usage: cp file_from file_to");
    }
    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit(98, strerror(errno));
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        print_error_and_exit(99, strerror(errno));
    }
    while ((bytes_read = read(fd_from, buffer, 1024)) > 0) {
        ssize_t bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            print_error_and_exit(99, strerror(errno));
        }
    }

    if (bytes_read == -1) {
        print_error_and_exit(98, strerror(errno));
    }

    if (close(fd_from) == -1) {
        print_error_and_exit(100, strerror(errno));
    }

    if (close(fd_to) == -1) {
        print_error_and_exit(100, strerror(errno));
    }

    return 0;

	/** int fd_src, fd_dest;
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
	*/
}
