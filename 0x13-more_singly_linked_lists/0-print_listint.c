#include "lists.h"

/**
 * print_listint - prints the values of the list listInt_t
 *
 * @h: head pointer pointing to first node in linked list
 *
 * Return: number of nodes in linked list
 *
 */

size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
