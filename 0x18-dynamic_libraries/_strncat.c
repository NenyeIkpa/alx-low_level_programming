#include <string.h>

/**
 * _strncat - concatenates two strings;
 * takes only n bytes from source and appends
 * afer null character of destination.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes/characters to be used during
 * concatenation
 *
 * Return: pointer to resulting string, dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_length + i] = src[i];
	dest[dest_length + i] = '\0';
	return (dest);
}
