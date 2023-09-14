#include "lists.h"

/**
 * dlistint_len - gets the number of elements in a list
 *
 * @h: head pointer
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	dlistint_t *point;

	point = (void *)h;
	while (point != NULL)
	{
		len++;
		point = point->next;
	}
	return (len);
}
