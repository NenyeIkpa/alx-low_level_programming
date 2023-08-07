#include "main.h"

/**
 * append_text_to_file - appends text to an existing file
 *
 * @filename: name of file to be created
 * @text_content: text to be added to file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, bytes_written;

	if (filename == NULL)
		return (-1);
	fildes = open(filename, O_RDWR | O_APPEND);
	if (fildes == -1)
		return (-1);
	if (text_content != NULL)
		bytes_written = write(fildes, text_content, strlen(text_content));
	if (bytes_written == -1)
		return (-1);
	close(fildes);
	return (1);
}
