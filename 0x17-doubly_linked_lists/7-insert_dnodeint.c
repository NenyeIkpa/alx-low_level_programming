#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given index
 *
 * @h: head pointer of list
 * @idx: insertion position
 * @n: data to be placed in new node
 *
 * Return: address of new node if successful otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t index = 1;
	dlistint_t *node, *curr;

	if (idx == 0)
		return (add_dnodeint(h, n));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	curr = (*h)->next;
	while (curr != NULL)
	{
		if (idx == index)
		{
			curr->prev->next = node;
			node->prev = curr->prev;
			curr->prev = node;
			node->next = curr;
			return (node);
		}
		if (curr->next == NULL && idx == index)
			return (add_dnodeint_end(h, n));
		curr = curr->next;
		index++;
	}
	return (NULL);
}
