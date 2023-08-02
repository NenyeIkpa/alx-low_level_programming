#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a given index
 *
 * @head: pointer to head pointer of given list
 * @idx: index to insert node
 * @n: value to be assigned to n of new node
 *
 * Return: address of new_node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *prev, *curr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	curr = *head;
	prev = NULL;
	while (curr != NULL)
	{
		if (i == idx)
		{
			new_node->next = prev->next;
			prev->next = new_node;
			return (new_node);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}
	if (curr == NULL && i == idx)
	{
		new_node->next = prev->next;
		prev->next = new_node;
		return (new_node);
	}
		free(new_node);
	return (NULL);
}
