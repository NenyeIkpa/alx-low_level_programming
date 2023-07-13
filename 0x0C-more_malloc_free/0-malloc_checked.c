#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: unsigned int
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
