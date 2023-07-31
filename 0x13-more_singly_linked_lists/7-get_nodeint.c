#include "lists.h"

/**
 * get_nodeint_at_index - returns node at given index
 *
 * @head: pointer to first node in list
 * @index: index of node to be returned
 *
 * Return: node of type listint_t
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_idx = -1;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		node_idx++;
		if (node_idx == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
