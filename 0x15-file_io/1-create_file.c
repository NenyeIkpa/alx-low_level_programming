#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: name of file to be created
 * @text_content: content of file to be created
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fildes, bytes_written;

	if (filename == NULL)
		return (-1);
	fildes = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fildes == -1)
		return (-1);
	bytes_written = write(fildes, text_content, (strlen(text_content) + 1));
	if (bytes_written == -1)
		return (-1);
	close(fildes);
	return (1);
}
