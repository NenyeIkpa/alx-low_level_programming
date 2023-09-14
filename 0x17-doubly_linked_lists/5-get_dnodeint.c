#include"lists.h"

/**
 * get_dnodeint_at_index -gets the node at given index
 *
 * @head: head pointer to list
 * @index: index of node to be retrieved
 *
 * Return: retrieved node or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx = 0;

	while (head != NULL)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}
	return (NULL);
}
