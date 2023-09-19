#include <string.h>

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 * @dest: copy destination
 * @src: copy source
 * @n: bytes of memory area to be copied
 *
 * Return: char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
