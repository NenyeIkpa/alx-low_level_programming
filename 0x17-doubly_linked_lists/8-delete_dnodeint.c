#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a specific index
 *
 * @head: head pointer
 * @index: position to be deleted
 *
 * Return: 1 if successful else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *curr;
	size_t idx = 1;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	curr = (*head)->next;
	while (curr != NULL)
	{
		if (idx == index)
		{
			temp = curr;
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			free(temp);
			return (1);
		}
		curr = curr->next;
		idx++;
	}
	return (-1);
}
