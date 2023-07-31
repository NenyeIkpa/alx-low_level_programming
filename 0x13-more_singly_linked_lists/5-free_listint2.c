#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: pointer to head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	if (*head != NULL)
	{
		curr = *head;
		*head = NULL;
	}
	else
		return;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}
