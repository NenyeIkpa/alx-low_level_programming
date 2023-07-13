#include <stdlib.h>
#include <string.h>

/**
 *  _realloc - reallocates a memory block using malloc and free
 *
 *  @ptr: a pointer
 *  @old_size: unsigned int
 *  @new_size: unsigned int
 *
 *  Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (ptr == NULL)
		return (malloc(new_size));
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		ptr2 = malloc(new_size);
		memcpy(ptr2, ptr, new_size - old_size);
		free(ptr);
	}
	return (ptr2);
}
