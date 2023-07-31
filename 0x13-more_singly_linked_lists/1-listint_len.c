#include "lists.h"

/**
 * listint_len -returns the number of elements in a list
 *
 * @h: pointer to head of linked list
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	int node_count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
