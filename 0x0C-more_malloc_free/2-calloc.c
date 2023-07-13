#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 *
 * @nmemb:num of elements in array
 * @size: size of elements in array
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
