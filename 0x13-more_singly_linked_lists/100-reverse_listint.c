#include "lists.h"

/**
 * reverse_listint - reverses a list
 *
 * @head: pointer to head pointer of list
 *
 * Return: reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr, *next = NULL;

	if (head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	curr = *head;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
