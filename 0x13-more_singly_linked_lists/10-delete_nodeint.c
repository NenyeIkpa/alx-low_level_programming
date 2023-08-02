#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 *
 * @head: pointer to head pointer of list
 * @index: given node index to delete
 *
 * Return: 1 for success, -1 for failure
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;
	prev = NULL;
	if (index == 0)
	{;
		*head = curr->next;
		free(curr);
		return (1);
	}
	prev = *head;
	while (curr != NULL)
	{
		if (i == index)
		{
			prev->next = curr->next;
			free(curr);
			return (1);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}
	if (curr == NULL && i == index)
	{
		prev->next = curr->next;
		free(curr);
		return (1);
	}
	return (-1);
}
