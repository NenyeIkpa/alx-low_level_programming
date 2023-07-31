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
	listint_t *prev, *curr;

	if (head == NULL)
		return (-1);;
}
