#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a given index
 *
 * @head: pointer to head pointer of given list
 * @idx: index to insert node
 * @n: value to be assigned to n of new node
 *
 * Return: given list with new node inserted
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *prev;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while ((*head)->next != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		if (i == idx)
		{
			new_node->next = prev;
			prev = new_node;
			return (new_node);
		}
		i++;
	}
	return (NULL);
}
