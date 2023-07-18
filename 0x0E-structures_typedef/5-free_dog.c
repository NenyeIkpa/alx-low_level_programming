#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 *
 * @d: dog of type dog_t
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
