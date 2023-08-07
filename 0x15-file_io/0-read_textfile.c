#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to be read
 * @letters: number of letters to read and print
 *
 * Description: check if "filename" is null. open file in read only mode and
 * allocate buffer for a memory to read the file content. use read() to read
 * up to "letters" number of bytes from the file to the buffer. write() is
 * used to write content of buffer to the stdout. check if write was successful
 * by comparing count of bytes read with bytes printed. free the memory
 * allocated to the buffer and close the file descriptor.
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	char *buffer;
	ssize_t bytes_read, bytes_printed;

	if (filename == NULL || letters <= 0)
		return (0);
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fildes);
		return (0);
	}
	bytes_read = read(fildes, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fildes);
		return (0);
	}
	bytes_printed = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_printed == -1 || bytes_printed != bytes_read)
	{
		free(buffer);
		close(fildes);
		return (0);
	}
	free(buffer);
	close(fildes);
	return (bytes_printed);

}
