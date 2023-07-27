#include "lists.h"

/**
 * list_len - returns length of elements in a list
 *
 * @h: linked list
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
